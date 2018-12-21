#ifndef _FRACTION_H
#define _FRACTION_H

#include <iostream>
#include <ostream>
using namespace std;

class Fraction {
 public:
  Fraction(int n=0, int d=1);
  ~Fraction() { }

  Fraction operator=(Fraction rhs);

  Fraction operator+(Fraction rhs);	// rhs = right hand side
  Fraction operator-(Fraction rhs);
  Fraction operator*(Fraction rhs);
  Fraction operator/(Fraction rhs);

  bool operator==(Fraction rhs);
  bool operator!=(Fraction rhs);
  bool operator<(Fraction rhs);
  bool operator>(Fraction rhs);
  bool operator<=(Fraction rhs);
  bool operator>=(Fraction rhs);
  void print();

  friend std::istream &operator>>(istream & is, Fraction &f);
  friend std::ostream &operator<<(ostream & os, Fraction  f);

 private:
  int
    num, 
    den;
};

#endif
