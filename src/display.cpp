#include <iostream>

#include "display.hpp"

Display::Display(int width, int height, int rows, int columns) {
    this->width = width;
    this->height = height;
    this->rows = rows;
    this->columns = columns;


    int result = SDL_Init(SDL_INIT_EVERYTHING);

    if (result != 0) {
        const char* error = SDL_GetError();
        std::cerr << "Error while initializing SDL: " << error << std::endl;
    }
}

Display::~Display() {
    SDL_Quit();
}
