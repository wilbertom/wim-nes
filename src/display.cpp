#include <iostream>

#include "display.hpp"
#include "log.hpp"

Display::Display(int width, int height, int rows, int columns) {
    this->width = width;
    this->height = height;
    this->rows = rows;
    this->columns = columns;


    int result = SDL_Init(SDL_INIT_EVERYTHING);

    if (result != 0) {
        const char* error = SDL_GetError();
        logError("Error while initializing SDL:");
        logError(error);
    } else {
        log("Initialized SDL");
    }
}

Display::~Display() {
    SDL_Quit();
}

void Display::draw(std::vector<int> pixels) {

}
