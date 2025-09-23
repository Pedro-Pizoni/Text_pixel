#include <iostream>
#include <vector>
#include "text_pixel.hpp"

int main() {
    std::vector<text_pixel> pixels;

    // Pokebola 
    int centerX = 15;
    int centerY = 8;
    int radius = 5; 

    for (int y = centerY - radius; y <= centerY + radius; y++) {
        for (int x = centerX - radius; x <= centerX + radius; x++) {
            int dx = x - centerX;
            int dy = y - centerY;
            if (dx*dx + dy*dy <= radius*radius) {
                if (y < centerY) {
                    pixels.push_back(text_pixel(x, y, "red"));   // topo vermelho
                } else if (y > centerY) {
                    pixels.push_back(text_pixel(x, y, "white")); // parte de baixo branca
                } else {
                    pixels.push_back(text_pixel(x, y, "black")); // faixa preta
                }
            }
        }
    }

    // Botão central (preto com ponto branco)
    pixels.push_back(text_pixel(centerX, centerY, "black"));
    pixels.push_back(text_pixel(centerX, centerY, "white")); // pontinho central

    // Desenha todos os pixels criados
    for (auto &p : pixels) {
        p.draw();
    }

    std::cout << "\033[20;0H"; 
    return 0;
}
