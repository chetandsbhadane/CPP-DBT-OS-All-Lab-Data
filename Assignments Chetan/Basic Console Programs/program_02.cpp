#include<iostream>

//Program #02 - Write a program to accept marks of five subjects from the user and calculate their average. Use implicit and explicit type conversion.
/*
 
    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC
     
*/

using namespace std;

int main(){
	int sub1,sub2,sub3,sub4,sub5;
	cout<<"Enter subject 1 marks ";
	cin>>sub1;

	cout<<"Enter subject 2 marks ";
	cin>>sub2;

	cout<<"Enter subject 3 marks ";
	cin>>sub3;

	cout<<"Enter subject 4 marks ";
	cin>>sub4;

	cout<<"Enter subject 5 marks ";
	cin>>sub5;

	cout<<"\nAverage by implicit type conversion: "<<endl;
	double averageImplicit = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	cout<<"\nAverage is: "<<averageImplicit;

	cout<<"\nAverage by explicit type conversion: "<<endl;
	int averageExplicit = ((double)sub1 + (double)sub2 + (double)sub3 + (double)sub4 + (double)sub5)/5;
	cout<<"\nAverage is: "<<averageExplicit;
	return 0;	
}
