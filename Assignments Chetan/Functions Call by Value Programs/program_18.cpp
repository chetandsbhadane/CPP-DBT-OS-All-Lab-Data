#include<iostream>
using namespace std;

/*
Program #18 - Write a program to generate following table:

Data Type	Size in Bytes
Integer			4
Character		1
Float			4

The border of the above table should be generated using a function ‘charLine()’.
This function accepts a character and the length of the line to be printed, entered by the user in main(). Use the character to print the line.


    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void charLine(char horizontal_line, char verticle_line,int l){

 		for(int i=1;i<=l;i++){
			for(int j=1;j<=l;j++){
				if(i==1 || i==l){
					cout<<horizontal_line;
				}
				else if(i==(l/2-3)){
					cout<<"     Integer       "<<sizeof(int);
					break;
				}
				else if(i==(l/2+3)){
					cout<<"     Character    "<<sizeof(char);
					break;	
				}
				else if(i==(l-3)){
					cout<<"     Float        "<<sizeof(float);
					break;
				}
				else if(j==l/2){
					cout<<verticle_line;
				}	
				else if(j==1 || j==l){
					cout<<verticle_line;
				}
				else{
					cout<<" ";
				}				
			}
			cout<<"\n";
		}
}

int main() {
	char hori,vert;
	int l;

	cout<<"enter which char to be printed as a border "<<endl;
	cin>>hori;

	cout<<"enter verticle line to be printed as border "<<endl;
	cin>>vert;

	cout<<"enter length of the border "<<endl;
	cin>>l;

	if(l>15 && l<30){
		
		charLine(hori,vert,l);
	
	}
	else{
		
		cout<<"You should give length greater than 15! and less than 30!"<<endl;

	}
	return 0;
}
