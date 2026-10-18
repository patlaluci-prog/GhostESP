#include "sdkconfig.h"
#if CONFIG_CROWPANEL_ADVANCE_43_LCD
/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Generated with lv_font_conv 1.5.3; see scripts/generate_czech_fonts.py.
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_FONT_CZECH_8
#define LV_FONT_CZECH_8 1
#endif

#if LV_FONT_CZECH_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+00C1 "Á" */
    0x0, 0x0, 0x60, 0x0, 0x0, 0x33, 0x0, 0x0,
    0xb, 0x80, 0x0, 0x3, 0x8a, 0x10, 0x0, 0xb1,
    0x39, 0x0, 0x4d, 0x99, 0xd1, 0xb, 0x10, 0x3,
    0x90,

    /* U+00C9 "É" */
    0x0, 0x6, 0x0, 0x4, 0x20, 0x2e, 0xaa, 0x82,
    0xa0, 0x0, 0x2d, 0xaa, 0x42, 0xa0, 0x0, 0x2e,
    0xaa, 0x90,

    /* U+00CD "Í" */
    0x4, 0x20, 0x50, 0x2a, 0x2, 0xa0, 0x2a, 0x2,
    0xa0, 0x2a, 0x0,

    /* U+00D3 "Ó" */
    0x0, 0x3, 0x30, 0x0, 0x0, 0x50, 0x0, 0x7,
    0xbb, 0xb3, 0x5, 0x90, 0x1, 0xc1, 0x93, 0x0,
    0x8, 0x45, 0x90, 0x1, 0xc1, 0x7, 0xbb, 0xb3,
    0x0,

    /* U+00DA "Ú" */
    0x0, 0x4, 0x20, 0x0, 0x14, 0x0, 0x39, 0x0,
    0x48, 0x39, 0x0, 0x48, 0x39, 0x0, 0x48, 0x1c,
    0x0, 0x66, 0x6, 0xba, 0xa0,

    /* U+00DD "Ý" */
    0x0, 0x1, 0x50, 0x0, 0x0, 0x50, 0x0, 0xa,
    0x20, 0xb, 0x0, 0x1b, 0x9, 0x30, 0x0, 0x5b,
    0x80, 0x0, 0x0, 0xd0, 0x0, 0x0, 0xc, 0x0,
    0x0,

    /* U+00E1 "á" */
    0x0, 0x94, 0x0, 0x2, 0x0, 0x29, 0x98, 0x2,
    0x98, 0xd1, 0x84, 0xc, 0x13, 0xb9, 0xd1,

    /* U+00E9 "é" */
    0x0, 0x76, 0x0, 0x3, 0x0, 0x19, 0x99, 0x19,
    0x98, 0x86, 0x85, 0x1, 0x1, 0xaa, 0xb1,

    /* U+00ED "í" */
    0xa, 0x21, 0x10, 0x48, 0x4, 0x80, 0x48, 0x4,
    0x80,

    /* U+00F3 "ó" */
    0x0, 0x67, 0x0, 0x3, 0x0, 0x1a, 0xaa, 0x18,
    0x40, 0x3a, 0x84, 0x3, 0xa1, 0xaa, 0xa1,

    /* U+00FA "ú" */
    0x0, 0x49, 0x0, 0x3, 0x0, 0x57, 0x1, 0xb5,
    0x70, 0x1b, 0x48, 0x3, 0xb0, 0xa9, 0x9b,

    /* U+00FD "ý" */
    0x0, 0xa, 0x20, 0x0, 0x11, 0x0, 0xb, 0x10,
    0x83, 0x3, 0x81, 0xa0, 0x0, 0xaa, 0x30, 0x0,
    0x4a, 0x0, 0xa, 0xb2, 0x0,

    /* U+010C "Č" */
    0x0, 0x52, 0x30, 0x0, 0x26, 0x0, 0x7, 0xba,
    0xa2, 0x59, 0x0, 0x0, 0x93, 0x0, 0x0, 0x59,
    0x0, 0x0, 0x7, 0xba, 0xa2,

    /* U+010D "č" */
    0x8, 0x86, 0x0, 0x4, 0x0, 0x1a, 0xaa, 0x18,
    0x40, 0x0, 0x84, 0x0, 0x1, 0xaa, 0xa1,

    /* U+010E "Ď" */
    0x1, 0x44, 0x10, 0x0, 0x4, 0x50, 0x0, 0x2e,
    0xab, 0xb3, 0x2, 0xa0, 0x1, 0xc0, 0x2a, 0x0,
    0x9, 0x22, 0xa0, 0x1, 0xc0, 0x2e, 0xab, 0xb3,
    0x0,

    /* U+010F "ď" */
    0x0, 0x0, 0x1, 0x0, 0x0, 0xb, 0x80, 0x0,
    0x0, 0xb2, 0x1, 0xaa, 0xab, 0x0, 0x94, 0x3,
    0xb0, 0x9, 0x40, 0x2b, 0x0, 0x1a, 0x99, 0xb0,
    0x0,

    /* U+011A "Ě" */
    0x2, 0x35, 0x0, 0x6, 0x30, 0x2e, 0xaa, 0x82,
    0xa0, 0x0, 0x2d, 0xaa, 0x42, 0xa0, 0x0, 0x2e,
    0xaa, 0x90,

    /* U+011B "ě" */
    0x8, 0x77, 0x0, 0x4, 0x0, 0x19, 0x99, 0x19,
    0x98, 0x86, 0x85, 0x1, 0x1, 0xaa, 0xb1,

    /* U+0147 "Ň" */
    0x0, 0x52, 0x30, 0x0, 0x36, 0x0, 0x2d, 0x10,
    0x2a, 0x2c, 0xb0, 0x2a, 0x2a, 0x4b, 0x2a, 0x2a,
    0x5, 0xca, 0x2a, 0x0, 0x7a,

    /* U+0148 "ň" */
    0x4, 0x99, 0x0, 0x3, 0x0, 0x4c, 0x9b, 0x44,
    0x90, 0x1b, 0x48, 0x0, 0xc4, 0x80, 0xc,

    /* U+0158 "Ř" */
    0x1, 0x44, 0x10, 0x0, 0x54, 0x0, 0x2e, 0xaa,
    0x90, 0x2a, 0x0, 0x84, 0x2a, 0x0, 0xa3, 0x2d,
    0xac, 0x80, 0x2a, 0x1, 0xb1,

    /* U+0159 "ř" */
    0x39, 0xa0, 0x2, 0x10, 0x4b, 0xa0, 0x4a, 0x0,
    0x48, 0x0, 0x48, 0x0,

    /* U+0160 "Š" */
    0x4, 0x25, 0x0, 0x7, 0x10, 0x2a, 0xaa, 0x27,
    0x60, 0x0, 0x8, 0x98, 0x10, 0x0, 0x49, 0x5a,
    0xaa, 0x30,

    /* U+0161 "š" */
    0x29, 0xa1, 0x2, 0x20, 0x5b, 0x95, 0x87, 0x30,
    0x3, 0x79, 0x7a, 0xa6,

    /* U+0164 "Ť" */
    0x5, 0x24, 0x0, 0x27, 0x0, 0xaa, 0xea, 0x60,
    0xc, 0x0, 0x0, 0xc0, 0x0, 0xc, 0x0, 0x0,
    0xc0, 0x0,

    /* U+0165 "ť" */
    0x1, 0x90, 0x29, 0x20, 0x9d, 0x70, 0x29, 0x0,
    0x29, 0x0, 0xb, 0x90,

    /* U+016E "Ů" */
    0x0, 0x35, 0x0, 0x0, 0x55, 0x0, 0x0, 0x35,
    0x0, 0x39, 0x0, 0x48, 0x39, 0x0, 0x48, 0x39,
    0x0, 0x48, 0x1c, 0x0, 0x66, 0x6, 0xba, 0xa0,

    /* U+016F "ů" */
    0x0, 0x52, 0x0, 0x5, 0x30, 0x57, 0x1, 0xb5,
    0x70, 0x1b, 0x48, 0x3, 0xb0, 0xa9, 0x9b,

    /* U+017D "Ž" */
    0x3, 0x25, 0x0, 0x0, 0x72, 0x0, 0x6a, 0xac,
    0xd0, 0x0, 0x1b, 0x20, 0x0, 0xb2, 0x0, 0xb,
    0x30, 0x0, 0x8d, 0xaa, 0xa0,

    /* U+017E "ž" */
    0x1a, 0x92, 0x1, 0x20, 0x59, 0xbb, 0x1, 0xb1,
    0xb, 0x20, 0x9c, 0x98,

    /* U+2013 "–" */
    0x88, 0x88
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 94, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 40, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 83, .box_w = 7, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 36, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 72, .box_w = 6, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 215, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 73, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 106, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 87, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 52, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 64, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 75, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 53, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 84, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 67, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 64, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x8, 0xc, 0x12, 0x19, 0x1c, 0x20, 0x28,
    0x2c, 0x32, 0x39, 0x3c, 0x4b, 0x4c, 0x4d, 0x4e,
    0x59, 0x5a, 0x86, 0x87, 0x97, 0x98, 0x9f, 0xa0,
    0xa3, 0xa4, 0xad, 0xae, 0xbc, 0xbd, 0x1f52
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 193, .range_length = 8019, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 31, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 2, 0, 3, 4, 5, 6,
    7, 8, 9, 8, 10, 11, 12, 3,
    13, 2, 7, 0, 6, 14, 15, 16,
    17, 18, 19, 4, 8, 20, 21, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 2, 3, 4, 5, 6,
    7, 8, 7, 9, 10, 3, 7, 2,
    7, 2, 7, 2, 8, 2, 8, 11,
    12, 13, 14, 4, 9, 15, 16, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    2, 0, -1, -2, -5, 0, -1, 0,
    -1, -3, 0, -1, -4, -1, 0, 0,
    0, 0, 0, 0, -1, -1, -1, 0,
    -1, -1, 0, -1, 0, -2, 0, -1,
    -1, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, -1, 1, -1, 0,
    -2, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -5, -2, -4, -1, 0, -8, -8, -5,
    -4, -5, -2, -9, -1, -3, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -2, 0, 0,
    0, -1, 0, 0, -12, 0, 0, -1,
    0, 0, 0, -2, -6, 0, 0, 0,
    0, 0, -2, 0, -11, 0, 0, 0,
    -1, 0, 0, -2, -5, -1, 0, 0,
    0, -2, 0, 0, -10, 0, 0, -1,
    -3, 0, -1, 0, -3, -2, -2, 0,
    0, -1, -1, -1, -5, 2, 0, -1,
    -2, 0, -2, 0, -2, -1, -3, 0,
    -2, 0, 0, -3, -1, 0, 0, -2,
    0, 0, 0, -1, -3, 0, -1, 0,
    0, -1, 0, 0, -11, 1, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 0, 0, 0, 6, 0, 1,
    0, 0, 0, 0, -1, -1, 0, 0,
    0, 0, 0, 0, -1, 1, 0, 0,
    -5, -2, -3, -2, -5, -1, -2, -1,
    0, 2, -2, 0, -5, 2, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    -4, 0, -1, -2, -1, -4, -7, -2,
    -2, -4, -1, -5, 1, 0, 0, -1,
    0, 0, 0, 0, 0, 0, -2, 2,
    0, -1, 0, 0, 0, -2, 0, 0,
    0, 0, -1, 0, 0, 0, -2, 0,
    -1, -2, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, -1, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 21,
    .right_class_cnt     = 16,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_font_czech_8 = {
#else
lv_font_t lv_font_czech_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_FONT_CZECH_8*/


#endif
