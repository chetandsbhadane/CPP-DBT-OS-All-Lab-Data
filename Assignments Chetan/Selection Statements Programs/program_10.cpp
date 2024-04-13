#include<iostream>
using namespace std;

/*
Program #10 - Write a program to find maximum of three numbers using conditional operators.	

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main(){

	int x,y,z;
	cout<<"Enter Three Numbers: "<<endl;
	cin>>x;
	cin>>y;
	cin>>z;


 	int maxNo = (x>y) ? ((x>z) ? x:z) : ((y>z) ? y:z);
	cout<<"Maximum of three no is "<<maxNo<<endl;

	return 0;

}

