#pragma once

#include "color.hpp"
#include "palette.hpp"

Color black = Color(0x000000);
Color white = Color(0xffffff);
Color dark_red = Color(0x880000);
Color pale_turquoise = Color(0xaaffee);
Color fuchsia = Color(0xcc44cc);
Color malachite = Color(0x00cc55);
Color new_midnight_blue = Color(0x0000aa);
Color dolly = Color(0xeeee77);
Color whiskey_sour = Color(0xdd8855);
Color raw_umber = Color(0x664400);
Color salmon = Color(0xff7777);
Color night_rider = Color(0x333333);
Color grey = Color(0x777777);
Color conifer = Color(0xaaff66);
Color dodger_blue = Color(0x0088ff);
Color silver = Color(0xbbbbbb);

Palette palette = Palette({
    black,
    white,
    dark_red,
    pale_turquoise,
    fuchsia,
    malachite,
    new_midnight_blue,
    dolly,
    whiskey_sour,
    raw_umber,
    salmon,
    night_rider,
    grey,
    conifer,
    dodger_blue,
    silver,
});

int DISPLAY_WIDTH = 160;
int DISPLAY_HEIGHT = 160;
int DISPLAY_ROWS = 32;
int DISPLAY_COLUMNS = 32;
