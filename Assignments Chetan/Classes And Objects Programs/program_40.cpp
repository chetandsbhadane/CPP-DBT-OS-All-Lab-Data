#include<iostream>
using namespace std;
//Write a program to count number of objects created for above class Complex . Use static data member and member function.

class Complex{
	private:
		int real;
		int img;
		//static int counter;	
		
	public:
		static int counter;
		
		Complex(int i,int j){
			real = i;
			img = j;
			counter++;
		}	
		
		static int getCounts();

};

int Complex::counter=0;

int Complex::getCounts(){
	return counter;
}

int main(){
	Complex c1(10,20);
	Complex c2(10,20);
	Complex c3(10,20);
	cout<<c1.getCounts();
	
	return 0;
}
