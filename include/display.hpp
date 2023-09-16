#pragma once

#include <vector>

#include <SDL3/SDL.h>

class Display {
public:
    Display(int width, int height, int rows, int columns);
    ~Display();

    void draw(std::vector<int> pixels);

private:
    int width;
    int height;
    int rows;
    int columns;
};
