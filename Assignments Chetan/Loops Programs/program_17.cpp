#include<iostream>
using namespace std;

/*
Program #17 - Write a program to generate following output.
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1 	        1 

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int main() {
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=6-i;j++){
			cout<<j;
		}
		
		for(int k=1;k<=2*(i-1);k++){
			cout<<" ";
		}

		for(int j=6-i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;

}

