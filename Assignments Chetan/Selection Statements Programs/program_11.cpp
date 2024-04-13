#include<iostream>
using namespace std;

/*
Program #11 - Write a program to convert user entered character into its opposite case. Program should also flash an error message if the character entered by the user is not an alphabet.	

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main() {
	
	char alphabet;
	cout<<"Enter only alphabet";
	cin>>alphabet;
	
	int ascii = (int)alphabet;
	if(ascii>=65 && ascii<=90){
			ascii = ascii + 32;
			cout<<"You entered: "<<alphabet<<"\nOpposite case: "<<(char)ascii<<endl;
		}
	else if(ascii>=97 && ascii<=122){
		ascii = ascii - 32;
		cout<<"You Entered : "<<alphabet<<"\nOpposite case: "<<(char)ascii<<endl;
	}
	else{
		cout<<"Error: The char entered by the user is not an alphabet"<<endl;
	}
	return 0;
}
