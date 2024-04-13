  /*
    1. Write a program to accept marks of five subjects from the user and calculate their average. Use implicit and explicit type conversion.
    2. Write a program to add two numbers and store the result in a third variable. Print the result.
    3. Write a program to swap two variables using a third variable and without using third variable.
    4. Write a program to calculate Net Salary of an employee. Accept Basic Salary (BS) from the user.
    HRA is 15% of BS										
    DA is 30% of BS											
    PF is 12.5% of GS										
    Gross Salary is BS + HRA + DA									
    Net Salary = Gross Salary – PF
    5. Accept a character from user. It may be alphabet, digit or any other character. Print its ASCII value.*/

#include<iostream>
using namespace std;
int main(){

	int arr[5];
	double avg=0;
	int total=0;
	cout<<"Enter 5 subjects marks "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
		total=total+arr[i];
	}

	int avg2 = (double)total/5;
	avg = total/5;
	cout<<" implicit avg - "<<avg<<endl;
	cout<<" explicit avg - "<<avg2<<endl;


	return 0;
}
