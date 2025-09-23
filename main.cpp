
#include <iostream>
#include <vector>
#include "text_pixel.hpp"

int main() {
    std::vector<text_pixel> pixels;

    for (int x = 14; x <= 16; x++) pixels.push_back(text_pixel(x, 5, "yellow"));
    for (int x = 12; x <= 18; x++) pixels.push_back(text_pixel(x, 6, "yellow"));
    for (int x = 11; x <= 19; x++) pixels.push_back(text_pixel(x, 7, "yellow"));
    for (int x = 10; x <= 20; x++) pixels.push_back(text_pixel(x, 8, "yellow"));
    for (int x = 10; x <= 20; x++) pixels.push_back(text_pixel(x, 9, "yellow"));
    for (int x = 11; x <= 19; x++) pixels.push_back(text_pixel(x, 10, "yellow"));
    for (int x = 12; x <= 18; x++) pixels.push_back(text_pixel(x, 11, "yellow"));
    for (int x = 14; x <= 16; x++) pixels.push_back(text_pixel(x, 12, "yellow"));
    pixels.push_back(text_pixel(9, 8, "yellow"));
    pixels.push_back(text_pixel(21, 8, "yellow"));
    pixels.push_back(text_pixel(15, 4, "yellow"));
    pixels.push_back(text_pixel(15, 13, "yellow"));
    pixels.push_back(text_pixel(10, 5, "yellow"));
    pixels.push_back(text_pixel(20, 5, "yellow"));
    pixels.push_back(text_pixel(10, 11, "yellow"));
    pixels.push_back(text_pixel(20, 11, "yellow"));

    for (auto &p : pixels) {
        p.draw();
    }

    std::cout << "\033[20;0H"; // move o cursor
    return 0;
}
