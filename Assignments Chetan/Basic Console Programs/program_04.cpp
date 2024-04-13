#include<iostream>
using namespace std;

//Program #04 - Write a program to swap two variables using a third variable and without using third variable.
/*

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main() {
	cout<<"------------ Swapping of two numbers with third variable -------------"<<endl;
	int num1=10,num2=20;
	cout<<"( Before Swapping )"<<endl;
	cout<<"number 1 - "<<num1<<endl;
	cout<<"number 2 - "<<num2<<endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout<<"-------- After Swapping  using third variable -------"<<endl;
	cout<<"number 1 - "<<num1<<endl;
	cout<<"number 2 - "<<num2<<endl;

	cout<<"\n\n"<<"-------- Swapping of two number without third variable --------"<<endl;
	int no1=10,no2=30;
	
	cout<<"( Before Swapping )"<<endl;
	cout<<"number 1 - "<<num1<<endl;
	cout<<"number 2 - "<<num2<<endl;
	
	no2 = no2-no1;
	no1 = no2+no1;
	no2 = no1-no2;

	cout<<"------------------ After swapping without third variable --------------"<<endl;
	cout<<"Number 1 - "<<no1<<endl;
	cout<<"Number 2 - "<<no2<<endl;
	return 0;

}
