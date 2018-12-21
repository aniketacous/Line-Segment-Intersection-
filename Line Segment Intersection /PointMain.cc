#include "point.h"
#include "fraction.h"
#include<iostream>

using namespace std;

int main() {

	
	Point p,pp,q,qq;
	cout<<"Enter points P:   (With Spaces)" << endl;
	cin>>p;

	cout<<"Enter points P':   (With Spaces)" << endl;
	cin>>pp;
	
     cout<<"Enter points Q:   (With Spaces)" << endl;
	cin>>q;
	
	cout<<"Enter points Q':   (With Spaces)" << endl;
	cin>>qq;
	

	Point r = (pp-p); 
	Point s = (qq-q);
	Point v = q-p;
	Fraction d = r*s;
	
	if(d==0)
	{
		if((v*s) == 0)
		{
		cout<<"Segments are collinear" << endl;
		}
		else
		{
		cout<<"Segments are parallel" << endl;
		}
	}
	else
	{
	Fraction t = (v*s)/d;
	Fraction u = (v*r)/d;
	
		if((t >= 0) && (t <= 1/1) && (u >= 0) && (u <= 1/1))
		 {
		 Point ip(q);
		 
		 ip = p + r * t;
		 cout<<"Segments intersect at " << ip << endl;
		 } 
		 else 
		 {
		 cout<< "Segments not parallel but do not intersect" << endl;
		 }
	}
	return 0;
		
			
	
}
	
