#include <iostream>
#include <vector>
#include "text_pixel.hpp"

int main() {
    std::vector<text_pixel> pixels;

    // Linha horizontal em y=5, indo de x=10 até x=20
    for (int x = 10; x <= 20; x++) {
        pixels.push_back(text_pixel(x, 5, "red"));
    }

    // Coluna vertical em x=15, indo de y=6 até y=12
    for (int y = 6; y <= 12; y++) {
        pixels.push_back(text_pixel(15, y, "green"));
    }

    // Retângulo preenchido de 5x3 em (30,10) usando azul
    for (int y = 10; y < 13; y++) {
        for (int x = 30; x < 35; x++) {
            pixels.push_back(text_pixel(x, y, "blue"));
        }
    }

    // Desenha todos os pixels criados
    for (auto &p : pixels) {
        p.draw();
    }

    std::cout << "\033[20;0H"; // move cursor para baixo no final
    return 0;
}
