#include<iostream>
using namespace std;
//Program #03 - Write a program to add two numbers and store the result in a third variable. Print the result.
/*

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main() {
	
	int number1,number2;
	double result=0;

	cout<<"Enter number 1"<<endl;
	cin>>number1;

	cout<<"Enter number 2"<<endl;
	cin>>number2;

	result = number1 + number2;
	cout<<"Number 1 + number 2 = "<<result<<endl;

	return 0;
}

