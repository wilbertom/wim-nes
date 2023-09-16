#include <iostream>
#include <vector>

#include "wimnes.hpp"

int main() {
    std::cout << "Test " << std::endl;
    std::cout << pale_turquoise.r << " " << pale_turquoise.g << " " << pale_turquoise.b << std::endl;

    std::vector<int> pixels = {0x00, 0x00, 0x00};
    Display display(DISPLAY_WIDTH, DISPLAY_HEIGHT, DISPLAY_ROWS, DISPLAY_COLUMNS);
    display.draw(pixels);

    return 0;
}