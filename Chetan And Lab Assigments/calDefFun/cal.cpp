#include "arith.h"
#include<iostream>


using namespace std;

int main() {
	char ch;
	do{
	
		cout<<"Enter your choice among: 1.Add\n2.Sub\n3.Mul\n4.Div";
		cin>>ch;
		int no1=0,no2=0;
		switch(ch){
			case '1' :
				{	
					cout<<"Enter no1: ";
					cin>>no1;
					cout<<"Enter no2: ";
					cin>>no2;
					cout<<add(no1,no2);
					
				};break;
			case '2' :
				{
					cout<<"enter no1: ";
					cin>>no1;
					cout<<"enter no2: ";
					cin>>no2;
					cout<<sub(no1,no2);

				};break;
			case '3' :
				{
					cout<<"enter no1: ";
					cin>>no1;
					cout<<"enter no2: ";
					cin>>no2;
					cout<<mul(no1,no2);

				};break;
			case '4' :
				{
					cout<<"enter no1: ";
					cin>>no1;
					cout<<"enter no2: ";
					cin>>no2;
					cout<<division(no1,no2);
				};break;
		
		}
	}while(ch!='e');	
	return 0;

}
