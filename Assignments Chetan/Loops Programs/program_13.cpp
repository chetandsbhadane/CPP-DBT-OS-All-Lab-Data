#include<iostream>
using namespace std;

/*
Program #13 - Write a program to display whether a user entered number is prime or not.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/
int main() {
	int number;
	cout<<"Enter a number to check prime or not? "<<endl;
	cin>>number;
	
	bool flag = true;
	for(int i=2;i<=number/2;i++){
		if(number%i==0){
			flag = false;
		}	
	}

	if(flag){
		cout<<"It is a prime number!"<<endl;
	}
	else{
		cout<<"It is not a prime number!"<<endl;
	}
	

	return 0;
}
