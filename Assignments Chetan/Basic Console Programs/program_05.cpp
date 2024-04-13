#include<iostream>
using namespace std;

/*
Program #05 -
Write a program to calculate Net Salary of an employee. Accept Basic Salary (BS) from the user.HRA is 15% of BS, DA is 30% of BS, PF is 12.5% of
GS, Gross Salary is BS + HRA + DA, Net Salary = Gross Salary – PF.


    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

double calSalary(double basicSal){
	
	double hra,da,netSal;
	hra = basicSal * 0.15f;
	da = basicSal * 0.30f;

	double gs;
	gs = basicSal + hra + da;

	double pf;
	pf = gs * 0.125f;
	netSal = gs-pf;

	return netSal;;

}

int main() {

	double basicSal;
	
	cout<<"Enter Basic Salary Of Employee: "<<endl;
	cin>>basicSal;

	double netSal = calSalary(basicSal);
	cout<<"The net salary of employee is: "<<netSal<<endl;
	
	
	return 0;
}

