#include "palette.hpp"

Palette::Palette(std::vector<Color> colors) {
    this->colors = colors;
}

Color Palette::get(std::vector<Color>::size_type index) {
    return this->colors[index];
}
