#include "text_pixel.hpp"
#include <iostream>

text_pixel::text_pixel() : point2D(0, 0), color_("white") {}
text_pixel::text_pixel(int px, int py, const std::string& pcolor)
    : point2D(px, py), color_(pcolor) {}

// Getter da cor
std::string text_pixel::color() const {
    return color_;
}

// Setter da cor
void text_pixel::color(const std::string& c) {
    color_ = c;
}

// Código ANSI da cor
std::string text_pixel::color_code() const {
    if (color_ == "black")   return "30";
    if (color_ == "red")     return "31";
    if (color_ == "green")   return "32";
    if (color_ == "yellow")  return "33";
    if (color_ == "blue")    return "34";
    if (color_ == "magenta") return "35";
    if (color_ == "cyan")    return "36";
    if (color_ == "white")   return "37";
    return "0"; // padrão
}

// Desenha o pixel colorido
void text_pixel::draw() const {
    std::cout << "\033[" << (y_+1) << ";" << (x_+1) << "H"
              << "\033[" << color_code() << "m"
              << "█"
              << "\033[0m";
}

// Operadores globais
bool operator==(const text_pixel& lhs, const text_pixel& rhs) {
    return point2D(lhs) == point2D(rhs) && (lhs.color() == rhs.color());
}

bool operator!=(const text_pixel& lhs, const text_pixel& rhs) {
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& lhs, const text_pixel& rhs) {
    return lhs << "(" << point2D(rhs) << ", " << rhs.color() << ")";
}
