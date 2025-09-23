#pragma once 
#include "point2D.hpp"
#include <string>
#include <ostream>

class text_pixel : public point2D { // herança da classe point2d
protected:
    std::string color_;

    public:
    text_pixel(int px, int py, const std::string& pcolor);
    text_pixel();

    
    std::string color() const;
    void color(const std::string& c);
    void draw() const;
       
    private:
    std::string color_code() const;
};

bool operator==(const text_pixel& lhs, const text_pixel& rhs);
bool operator!=(const text_pixel& lhs, const text_pixel& rhs);
std::ostream& operator<<(std::ostream& lhs, const text_pixel& rhs);