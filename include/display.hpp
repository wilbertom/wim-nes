#pragma once

#include <SDL3/SDL.h>

class Display {
public:
    Display(int width, int height, int rows, int columns);
    ~Display();

private:
    int width;
    int height;
    int rows;
    int columns;
};
