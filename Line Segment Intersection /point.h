#ifndef _POINT_H
#define _POINT_H
#include<iostream>
#include "fraction.h"

using namespace std; 


 class Point {
  	public:
 		Point(Fraction a, Fraction b)
 		{
 		 x = a;
 		 y = b;
 		}
 		Point()
 		{
 		 
 		}
 		Point operator +(Point rhs);
 		Point operator -(Point rhs);
 		Fraction operator *(Point rhs);
 		Point operator *(Fraction rhs);
 		friend std::istream &operator>>(istream & is, Point &p);
  		friend std::ostream &operator<<(ostream & os, Point  p);
 	     
  
  	private:
  		Fraction x;
 		Fraction y;
  
  };
#endif
