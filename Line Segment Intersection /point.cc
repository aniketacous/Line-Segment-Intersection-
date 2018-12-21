#include "point.h"

using namespace std;

Point Point::operator +(Point rhs) {

return Point(this->x + rhs.x, this->y+rhs.y);

}
Point Point::operator -(Point rhs)	{

return Point(this->x - rhs.x, this->y - rhs.y);

}

Fraction Point::operator *(Point rhs) {

return Fraction(this->x * rhs.y - this->y * rhs.x);

}
Point Point::operator *(Fraction rhs)	{

return Point(this->x * rhs, this->y * rhs);

}
std::istream &operator>>(istream &is, Point &p)	{
 char p1,p2, c;
 Fraction f1,f2;
// is>>f1>>f2;
 is >> p1 >> f1 >> c >> f2 >> p2;
 p = Point(f1,f2);
 return is;
}
std::ostream &operator<<(ostream & os, Point  p)	{
os<<"(" << p.x << "," << p.y << ")" << endl;
return os;
} 
