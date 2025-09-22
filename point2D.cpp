#include <cmath>
#include "point2D.hpp"

double point2D::distance_to(const point2D &other) const{
  auto dx = x_ - other.x_;
  auto dy = y_ - other.y_;
  return std::sqrt(dx * dx + dy * dy);
}


bool operator==(const point2D& lhs, const point2D& rhs){
    return lhs.x()==rhs.x() && lhs.y()==rhs.y();
}

bool operator!=(const point2D& lhs, const point2D& rhs){
    return !(rhs==lhs);
}

std::ostream& operator<<(std::ostream& lhs, const point2D& rhs){
    return lhs << "(" << rhs.x() << ", " << rhs.y() << ")";
}

point2D operator+(const point2D& lhs, const point2D& rhs){
    return point2D(lhs.x()+rhs.x(), lhs.y()+rhs.y());
}

point2D operator*(const point2D& lhs, int scale){
    return point2D(lhs.x()*scale, lhs.y()*scale);
}
