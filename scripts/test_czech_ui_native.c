#include "gui/ghost_cz_ui.h"
#include "lvgl.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    assert(strcmp(ghost_cz_ui("Settings"), "Nastavení") == 0);
    assert(strcmp(ghost_cz_ui("Close"), "Zavřít") == 0);
    const char *raw = "MojeSSID: %s / soubor.nfc";
    assert(ghost_cz_ui(raw) == raw);
    assert(strcmp(ghost_cz_ui("commsend scanap -live"), "commsend scanap -live") == 0);
    const char *saved = ghost_cz_ui("Settings");
    (void)ghost_cz_ui("Close");
    assert(strcmp(saved, "Nastavení") == 0);
    char text[32];
    for (size_t capacity = 1; capacity < sizeof(text); ++capacity) {
        size_t n = ghost_cz_copy(text, capacity, "Příliš žluťoučký kůň");
        assert(n < capacity && text[n] == 0);
        uint32_t i = 0;
        while (i < n) {
            uint32_t ch = _lv_txt_encoded_next(text, &i);
            assert(ch && ch != 0xfffd && i <= n);
        }
    }
    assert(ghost_cz_copy(NULL, 0, "test") == 0);
    const lv_font_t *fonts[] = {&lv_font_montserrat_8,&lv_font_montserrat_10,
        &lv_font_montserrat_12,&lv_font_montserrat_14,&lv_font_montserrat_16,
        &lv_font_montserrat_18,&lv_font_montserrat_24,&lv_font_montserrat_28,
        &lv_font_montserrat_40};
    const char *letters = "ÁČĎÉĚÍŇÓŘŠŤÚŮÝŽáčďéěíňóřšťúůýž–";
    for (size_t f=0; f<sizeof(fonts)/sizeof(fonts[0]); ++f) {
        uint32_t i=0;
        while (letters[i]) {
            uint32_t ch = _lv_txt_encoded_next(letters,&i);
            lv_font_glyph_dsc_t d;
            assert(lv_font_get_glyph_dsc(fonts[f],&d,ch,0));
            assert(!d.is_placeholder && d.resolved_font);
            assert(d.box_h+d.ofs_y <= fonts[f]->line_height-fonts[f]->base_line);
            assert(-d.ofs_y <= fonts[f]->base_line);
        }
        lv_font_glyph_dsc_t icon;
        assert(lv_font_get_glyph_dsc(fonts[f],&icon,0xf00c,0));
    }
    lv_point_t size;
    const lv_font_t *font = &lv_font_montserrat_28;
    lv_txt_get_size(&size,"Příliš žluťoučký kůň. Wi-Fi, BLE, GPS a LoRa – český terminál.",font,0,2,768,LV_TEXT_FLAG_NONE);
    assert(size.x <= 768 && size.y >= font->line_height && size.y < 400);
    lv_txt_get_size(&size,"01234567890123456789012345678901234567890123456789012345678901234567890123456789",font,0,2,372,LV_TEXT_FLAG_NONE);
    assert(size.x <= 372 && size.y > font->line_height && size.y < 400);
    puts("Native Czech lookup, UTF-8, all glyphs/icons and 800x480 terminal wrapping passed");
    return 0;
}
