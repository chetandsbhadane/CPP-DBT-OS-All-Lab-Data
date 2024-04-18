/*39. Implement class Complex with real (int) and imaginary (int) parts as data members of class. Implement below functions inside this class.
default constructor, parameterized constructor, getter functions for real and imaginary parts, setter functions for real and imaginary parts, 
display function.*/

#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	public:
		Complex(){
		}

		Complex(int r,int i){
			real = r;
			img = i;
		}	
	
		int getReal(){
			return real;
		}

		int getImg(){
			return img;
		}
		
		int setReal(int r){
			return real=r;
		}

		int setImg(int i){
			return img=i;
		}

		void disl(){
			cout<<" real - "<<real<<" img - "<<img<<endl;
		}
};
int main(){
	
	Complex c1(10,20);
	Complex c2(20,30);
	//c1 = c2; //copy constructor.. all the values of c2 will assigned to c1
	c1.disl();
	c2=c1;
	c2.disl();
	return 0;
}
