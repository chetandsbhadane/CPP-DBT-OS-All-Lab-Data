#include<iostream>
using namespace std;

/*
Program - Write a program to generate following output.
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main()
{

	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			cout<<"*";
		
		}

		for(int k=i;k<=3*(i-1);k++){
			cout<<" ";
		
		}
		for(int j=5;j>=i;j--){
			cout<<"*";
		
		}
     	cout<<endl;
	
	}


	for(int i=5;i>=1;i--){
		for(int j=5;j>=i;j--){
			cout<<"*";
		
		}

		for(int k=i;k<=3*(i-1);k++){
			cout<<" ";
		}
		for(int j=5;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
return 0;


}
