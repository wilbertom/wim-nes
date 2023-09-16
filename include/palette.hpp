#pragma once

#include <vector>

#include "color.hpp"

class Palette {
public:
    std::vector<Color> colors;

    Palette(std::vector<Color> colors);

    Color get(std::vector<Color>::size_type index);
};