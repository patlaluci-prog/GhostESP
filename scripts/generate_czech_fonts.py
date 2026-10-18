#!/usr/bin/env python3
"""Regenerate CrowPanel Czech fallback glyphs using lv_font_conv 1.5.3.

Install the pinned converter in a separate tool directory, then pass its CLI:
  python scripts/generate_czech_fonts.py --converter /path/to/lv_font_conv
The bundled Montserrat-Medium.ttf is the source; existing primary fonts and
FontAwesome symbols remain unchanged. Primary line heights are tested in CI.
"""
import argparse
from pathlib import Path
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
SIZES = [8, 10, 12, 14, 16, 18, 24, 28, 40]
SYMBOLS = "ÁČĎÉĚÍŇÓŘŠŤÚŮÝŽáčďéěíňóřšťúůýž–"

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--converter", default="lv_font_conv")
    args = parser.parse_args()
    for size in SIZES:
        with tempfile.TemporaryDirectory() as folder:
            name = f"lv_font_czech_{size}.c"
            output = Path(folder)/name
            subprocess.run([args.converter,"--no-compress","--no-prefilter",
                "--bpp","4","--size",str(size),"--font","Montserrat-Medium.ttf",
                "--symbols",SYMBOLS,"--format","lvgl","--lv-include","lvgl.h",
                "-o",str(output),"--force-fast-kern-format"],
                cwd=ROOT/"components/lvgl/scripts/built_in_font",check=True)
            source = output.read_text(encoding="utf-8")
            source = re.sub(r"^ \* Opts:.*$", " * Generated with lv_font_conv 1.5.3; see scripts/generate_czech_fonts.py.", source, flags=re.M)
            source = '#include "sdkconfig.h"\n#if CONFIG_CROWPANEL_ADVANCE_43_LCD\n'+source+'\n#endif\n'
            (ROOT/"components/lvgl/src/font"/name).write_text(source,encoding="utf-8",newline="\n")
