#include<iostream>
#include<cstdlib>
using namespace std;

/*
Program #09 - Using switch-case construct, write a menu driven program to perform basic calculations (addition, subtraction, multiplication and division) on two user entered numbers.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/


int main()
{
	 int no1,no2;
	 int result=0;
	 char ch;
	 do
	 {
	 
	 cout<<"\n 1 for Add";
	 cout<<"\n 2 for Sub";
	 cout<<"\n 3 for Mult";
	 cout<<"\n 4 for Div";
	 cout<<"\n e for exit" ;
	 
	 cout<<"Enter your choice:";
	 cin>>ch;
	 switch(ch)
	 {
 		case '1' :
		        	{
					cout<<"\n Enter First no";
					cin>>no1;
					cout<<"\n Enter Secondt no";
					cin>>no2;
					result = no1+ no2;
	 				cout<<"\n Result ="<<result;
				};break;

		case '2' :
				{
					cout<<"\n Enter First No";
					cin>>no1;
					cout<<"\n Enter a second no";
					cin>>no2;
					result = no1-no2;
					cout<<"\n Result ="<<result;
				
				};break;
		case '3' :
				{
					cout<<"\n Enter First no";
					cin>>no1;
					cout<<"\n Enter 2nd no";
					cin>>no2;
					result = no1*no2;
					cout<<"\n Result ="<<result;
				};break;
		case '4' :
				{
					cout<<"\n Enter first no:";
					cin>>no1;
					cout<<"enter 2nd no";
					cin>>no2;
					result = no1 / no2;
					cout<<"\n Result ="<<result;
				};break;
		case '0' : exit(0);
	 }
	 }
	 while(ch !='e');
	 return 0;
}
