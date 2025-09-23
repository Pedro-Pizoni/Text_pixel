#include "text_pixel.hpp"
#include <iostream>

// Construtor padrão
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

// Código das cores
std::string text_pixel::color_code() const { // color_code é um metodo da classe text_pixel // herança  
    if (color_ == "black")   return "30";
    if (color_ == "red")     return "31";
    if (color_ == "green")   return "32";
    if (color_ == "yellow")  return "33";
    if (color_ == "blue")    return "34";
    if (color_ == "magenta") return "35";
    if (color_ == "cyan")    return "36";
    if (color_ == "white")   return "37";
    if (color_ == "bright_black")   return "90";
    if (color_ == "bright_red")     return "91";
    if (color_ == "bright_green")   return "92";
    if (color_ == "bright_yellow")  return "93";
    if (color_ == "bright_blue")    return "94";
    if (color_ == "bright_magenta") return "95";
    if (color_ == "bright_cyan")    return "96";
    if (color_ == "bright_white")   return "97";

    return "0"; // padrão
}

// Desenha o pixel colorido
void text_pixel::draw() const { // draw é um metodo da classe text_pixel // herança
    std::cout << "\033[" << (y_+1) << ";" << (x_+1) << "H"
          << "\033[" << (std::stoi(color_code()) + 10) << "m"  // cor de fundo
          << " " 
          << "\033[0m";

}

// Operadores 
bool operator==(const text_pixel& lhs, const text_pixel& rhs) {
    return lhs.x() == rhs.x() && lhs.y() == rhs.y() && lhs.color() == rhs.color();
}

bool operator!=(const text_pixel& lhs, const text_pixel& rhs) {
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& lhs, const text_pixel& rhs) {
   return lhs << "(" << rhs.x() << ", " << rhs.y() << ", " << rhs.color() << ")";

}
