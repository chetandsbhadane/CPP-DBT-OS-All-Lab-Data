//Overload function “Add” to add two integers, floats and doubles.
#include<iostream>
using namespace std;

int Add(int a,int b){
	return a+b;
}

float Add(float a,float b){
	return a+b;
}

double Add(double a,double b){
	return a+b;
}


int main(){

	cout<<"int overloaded.."<<endl;
	cout<<Add(10,20)<<endl;

	cout<<"float overlaoded.."<<endl;
	cout<<Add(10.0F,10.0F)<<endl;

	cout<<"double overloaded"<<endl;
	cout<<Add(10,20)<<endl;
}
