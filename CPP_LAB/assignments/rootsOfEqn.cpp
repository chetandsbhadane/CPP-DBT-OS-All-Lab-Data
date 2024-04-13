#include<cmath>
#include<iostream>
using namespace std;

double rootsOfEqn(double number){
	
	double result = sqrt(number);

	return result;
}

int main() {
	
	double number=0;
	cout<<"enter a number ";
	cin>>number;
	cout<<"The Root of the number "<<number<<"is :"<<rootsOfEqn(number);

	return 0;
}

