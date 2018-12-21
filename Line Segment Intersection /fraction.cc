#include "fraction.h"


static int gcd(int a, int b) {
  int r;

  while (b!= 0){
	r = a% b;
	a = b;
	b = r;
 }
  return a;
}

Fraction::Fraction(int n, int d) {
  int g;

   // make sure numerator is not negative
  if (n < 0) {
    n = -n;
    d = -d;
 }

  // divide both sides by gcd
  g = gcd(n,d);

  num = n/g;
  den = d/g;
}

Fraction Fraction::operator=(Fraction rhs) {

   this->num = rhs.num;
   this->den = rhs.den;

   return rhs;

}



Fraction Fraction::operator+(Fraction rhs) {

	int n,d;

	n = num * rhs.den + den * rhs.num;
	d = den * rhs.den;
	return Fraction (n,d);

}


Fraction Fraction::operator-(Fraction rhs){
	int n,d;

	n = num * rhs.den - den * rhs.num;
	d = den * rhs.den;
	return Fraction (n,d);
}


Fraction Fraction::operator*(Fraction rhs){
	int n, d;

	n = num * rhs.num;
	d = den * rhs.den;
	return Fraction (n,d);
}


Fraction Fraction::operator/(Fraction rhs){
	int n,d;

	n = num * rhs.den;
	d = den * rhs.num;
	return Fraction(n,d);
}

bool Fraction::operator==(Fraction rhs){
	return num == rhs.num && den == rhs.den;
}

bool Fraction::operator<(Fraction rhs){	// copy/paste for other four inequalities

	if (den * rhs.den >= 0) // leave the same for all four
		return num * rhs.den < den * rhs.num;
	else
		return num * rhs.den > den * rhs.num;
}

std::istream &operator>>(std::istream &is, Fraction &f){
	int n,d;
	char ch;

	is >> n >> ch >> d;
	f = Fraction(n,d); 

	return is;	
}


std::ostream &operator<<(std::ostream &os, Fraction f){
	os << f.num << " / " << f.den;

	return os;
}
bool Fraction::operator !=(Fraction rhs)
{
  return num != rhs.num || den != rhs.den;
}
bool Fraction::operator >(Fraction rhs)
{
if (den * rhs.den >= 0) // leave the same for all four
		return num * rhs.den > den * rhs.num;
	else
		return num * rhs.den < den * rhs.num;
}
bool Fraction::operator<=(Fraction rhs)
{
if (den * rhs.den >= 0) // leave the same for all four
		return num * rhs.den <= den * rhs.num;
	else
		return num * rhs.den >= den * rhs.num;
}
bool Fraction::operator>=(Fraction rhs)
{
if (den * rhs.den >= 0) // leave the same for all four
		return num * rhs.den >= den * rhs.num;
	else
		return num * rhs.den <= den * rhs.num;
}
void Fraction::print()
{
cout<< num << "/" << den << endl;
}



