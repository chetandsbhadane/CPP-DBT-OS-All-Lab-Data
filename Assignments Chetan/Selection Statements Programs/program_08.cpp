#include<iostream>
using namespace std;

/* Program #08 -  Write a program to accept the basic salary and total sales amount for a salesperson and calculate commission according to sales amount. Display the net salary and commission earned. (Net Salary = Basic Salary + Commission) The range is as follows.
					Sales Amount in Rupees	       Commission on Sales
       					   5000 to 7500                   	3%
					  7501 to 10500                         8%
					 10501 to 15000                        11%
					 15000 and above                       15%   */
/*
 
    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC

*/

void calCommission(double basicSal,double salesAmt){
	double netSal=0,commission=0;
	if(salesAmt > 5000 && salesAmt < 7500){
		commission = salesAmt * 0.3f;
		netSal = basicSal + commission;
		cout<<"The net Salary is "<<netSal<<endl;
	 }

	else if(salesAmt > 7500 && salesAmt <= 10500){
		commission = salesAmt * 0.8f;
		netSal = basicSal + commission;
		cout<<"The net salary is "<<netSal<<endl;
	}

	else if(salesAmt > 10500 && salesAmt <= 15000){
		commission = salesAmt * 0.11f;
		netSal = basicSal + commission;
		cout<<"The net salary is "<<netSal<<endl;
	}
	
	else if(salesAmt > 15000){
		commission = salesAmt * 0.15f;
		netSal = basicSal + commission;
		cout<<"The net salary is "<<netSal<<endl;
	}
	else{
		cout<<"No Commission Aplicable!"<<endl;
		cout<<"\n=============== Commission Chart ============"<<endl;
		cout<<" Sales Amount in Rupees         Commission on Sales "<<endl;
                cout<<" 5000 to 7500                         3% "<<endl;
                cout<<" 7501 to 10500                         8%"<<endl;
                cout<<" 10501 to 15000                        11%"<<endl;
                cout<<" 15000 and above                       15%"<<endl;   
	}
}

int main(){

	double basicSal;
	cout<<"Enter your basic salary: "<<endl;
	cin>>basicSal;

	double salesAmt;
	cout<<"Enter total sales amount: "<<endl;
	cin>>salesAmt;

	calCommission(basicSal,salesAmt);

	return 0;

}
