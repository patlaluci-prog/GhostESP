#!/usr/bin/env python3
"""Czech presentation regressions; no device or radio activity is required."""
import ast
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
CAT = json.loads((ROOT / 'docs/czech_ui_catalog.json').read_text(encoding='utf-8'))
PRINTF = re.compile(r'%(?:[-+ #0]*)(?:\d+|\*)?(?:\.(?:\d+|\*))?(?:hh|ll|[hljztL])?[diouxXfFeEgGaAcspn%]')
SIZES = [8, 10, 12, 14, 16, 18, 24, 28, 40]

class CzechUI(unittest.TestCase):
    def test_format_arguments_stay_identical(self):
        for en, cs in CAT.items():
            with self.subTest(key=en):
                self.assertEqual(PRINTF.findall(en), PRINTF.findall(cs))

    def test_catalog_is_sorted_unique_and_matches_json(self):
        source = (ROOT/'main/gui/ghost_cz_ui.c').read_text(encoding='utf-8')
        pairs = re.findall(r'^    (\{".*"\}),$', source, re.M)
        rows = [ast.literal_eval(p.replace('{','(',1)[:-1]+')') for p in pairs]
        self.assertEqual(len(rows), len(CAT))
        self.assertEqual(rows, sorted(CAT.items()))

    def test_fonts_cover_czech_and_keep_icons(self):
        required = set(map(ord, 'ÁČĎÉĚÍŇÓŘŠŤÚŮÝŽáčďéěíňóřšťúůýž–'))
        for size in SIZES:
            p = ROOT/f'components/lvgl/src/font/lv_font_czech_{size}.c'
            covered = {int(x,16) for x in re.findall(r'U\+([0-9A-Fa-f]+)',p.read_text(encoding='utf-8'))}
            self.assertTrue(required <= covered, size)
            primary = (ROOT/f'components/lvgl/src/font/lv_font_montserrat_{size}.c').read_text(encoding='utf-8')
            self.assertIn(f'.fallback = &lv_font_czech_{size}', primary)
            self.assertIn('FontAwesome5', primary)

    def test_radio_storage_and_backlight_sources_unchanged(self):
        expected = json.loads((ROOT/'docs/czech_protected_sources.json').read_text(encoding='utf-8'))
        for name, digest in expected.items():
            content = (ROOT/name).read_text(encoding='utf-8').replace('\r\n','\n')
            self.assertEqual(hashlib.sha256(content.encode()).hexdigest(), digest, name)

    def test_ssids_and_terminal_font(self):
        source = (ROOT/'main/managers/views/options_screen.c').read_text(encoding='utf-8')
        self.assertIn('item->setting_type == SETTING_AP_SSID ||', source)
        self.assertIn('item->setting_type == SETTING_STA_SSID)) return value;', source)
        terminal = (ROOT/'main/managers/views/terminal_screen.c').read_text(encoding='utf-8')
        crowpanel = terminal.split('#if defined(CONFIG_CROWPANEL_ADVANCE_43_LCD)',1)[1].split('#elif',1)[0]
        self.assertIn('case 2: return &lv_font_montserrat_28;', crowpanel)
        self.assertIn('CONFIG_LV_FONT_MONTSERRAT_28=y', (ROOT/'configs/sdkconfig.crowpanel_advance43').read_text())

    @unittest.skipUnless(shutil.which('cc'), 'native C compiler unavailable (runs in Linux CI)')
    def test_native_lookup_utf8_fonts_and_terminal_wrapping(self):
        with tempfile.TemporaryDirectory() as folder:
            tmp = Path(folder)
            (tmp/'sdkconfig.h').write_text('#define CONFIG_CROWPANEL_ADVANCE_43_LCD 1\n')
            cmd = ['cc','-std=c99','-O1','-ffunction-sections','-fdata-sections',
                   '-DLV_CONF_SKIP=1','-DLV_KCONFIG_IGNORE=1','-DLV_USE_LOG=0',
                   '-DLV_USE_ASSERT_NULL=0','-DLV_USE_ASSERT_MALLOC=0',
                   '-DLV_USE_FONT_COMPRESSED=0', '-I'+str(tmp), '-I'+str(ROOT/'main'),
                   '-I'+str(ROOT/'components/lvgl')]
            cmd += [f'-DLV_FONT_MONTSERRAT_{size}=1' for size in SIZES]
            cmd += [str(ROOT/'scripts/test_czech_ui_native.c'),str(ROOT/'main/gui/ghost_cz_ui.c')]
            cmd += [str(ROOT/'components/lvgl/src'/p) for p in ['font/lv_font.c','font/lv_font_fmt_txt.c','misc/lv_txt.c','misc/lv_utils.c']]
            for size in SIZES:
                cmd += [str(ROOT/f'components/lvgl/src/font/lv_font_montserrat_{size}.c'),str(ROOT/f'components/lvgl/src/font/lv_font_czech_{size}.c')]
            cmd += ['-Wl,--gc-sections','-o',str(tmp/'czech-test')]
            subprocess.run(cmd,check=True,cwd=ROOT)
            subprocess.run([str(tmp/'czech-test')],check=True,cwd=ROOT)

if __name__ == '__main__':
    unittest.main(verbosity=2)
