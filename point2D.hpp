#ifndef _POINT2D_HPP_
#define _POINT2D_HPP_
#include <ostream>

class point2D {
protected:
  int x_;
  int y_;

public:
// Construtores
  point2D(int px, int py) : x_{px}, y_{py} {}

  point2D() : point2D(0, 0) { 
  }

  int x() const { // getter
    return x_;
  }

  void x(int px) { // setter
    x_ = px;
  }

  int y() const { return y_; }

  void y(int py) { y_ = py; }

  // Retorna a distância cartesiana entre os pontos
  double distance_to(const point2D &other) const;
};

bool operator==(const point2D& lhs, const point2D& rhs);
bool operator!=(const point2D& lhs, const point2D& rhs);
std::ostream& operator<<(std::ostream& lhs, const point2D& rhs);
point2D operator+(const point2D& lhs, const point2D& rhs);
point2D operator*(const point2D& lhs, int scale);
#endif