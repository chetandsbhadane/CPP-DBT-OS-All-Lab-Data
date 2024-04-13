#include<iostream>
using namespace std;

/*
Program #07 - Write a program to find leap year by using: a. if-else and logical operators (&& and ||).	b. Conditional Operators (? :)	

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void leapYearIfElse(int year){
	if(year%4==0){
		if(year%100!=0 || year%400 == 0){
			cout<<"The year is leap year!!"<<endl;
		}
		else{
			cout<<"Year is not a leap year!";
		}
	}
	else{
		cout<<"The year is not leap year!!"<<endl;
	}
}

int main(){
	
	int year=0;
	cout<<"Enter a year to check if it is leap or not: "<<endl;
	cin>>year;

	leapYearIfElse(year);
	
	cout<<"\n"<<"Find leap year using Conditional Operators"<<endl;
	(year%4==0 && year%100!=0) ? printf("LEAP YEAR") : (year%400 ==0 ) ? printf("LEAP YEAR") : printf("NOT LEAP YEAR");

	(year%4==0 && year%100!=0) ? cout<<"it is leap year" :(year%400==0) ? cout<<"It is leap year" : cout<<"Not a leap year!";
	return 0;
}


