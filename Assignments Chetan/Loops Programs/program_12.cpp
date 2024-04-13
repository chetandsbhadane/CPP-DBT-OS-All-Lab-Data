#include<iostream>
using namespace std;

/*
Program #12 - Write a program to print whether user entered number is an Armstrong number. 
Armstrong number is one for which the sum of the cube of all its digits is same as the number. 
For example, 153 = (1*1*1) + (5*5*5) + (3*3*3)

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/
int main() {
	
	int num = 0;
	cout<<"enter a number to check if it is armstrong or not "<<endl;
	cin>>num;

	int sum = 0;
	int temp = num;
	while(num!=0){
		int rem = num%10; 
		sum = sum + (rem*rem*rem);
		num = num/10;
	}

	if(temp == sum){
		cout<<"The number is Armstrong Number!"<<endl;
	}
	else{
		cout<<"The number is not Armstorng!"<<endl;
	}

	
	return 0;
} 
