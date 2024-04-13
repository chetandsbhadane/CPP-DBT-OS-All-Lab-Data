#include<iostream>
using namespace std;
#define pi 3.14


double areaOfCircle(double radius) {
	double area=0;
	area = pi * (radius*radius);
	return area;
}

double areaOfRect(double l,double b)
{
	double area=0;
	return area=l*b;

}

double areaOfSqr(double side) {
	double area=0;
	return area=side*side;
}

int main(){
	double radius=5;
	double area = areaOfCircle(radius);
	cout<<"Area Of Circle is : "<<area<<endl;

	double l=10;
	double b=30;
	cout<<"Area of Rect is : "<<areaOfRect(l,b)<<endl;
	
	
	double side=20;
	cout<<"area of square is: "<<areaOfSqr(side);
	return 0;

}

