#include "color.hpp"

Color::Color(int r, int g, int b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

Color::Color(int hex) {
    this->r = (hex >> 16);
    this->g = (hex >> 8) & 0x00ff;
    this->b = hex & 0x0000ff;
}