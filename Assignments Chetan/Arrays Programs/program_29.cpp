#include<iostream>
#include<string>
using namespace std;

/*
Program #29 - Write a program to accept a string from the user.  Write separate functions to perform the following:
    a. Find the number of occurrences of given character in the string
    b. Find the number of blank spaces in the string.
    c. Find the number of words in the string.
    d. Find the total number of all the vowels in the string.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

int occur(string str,char alpha){
	int count=0;
	for(int i=0;i<str.length();i++){
		if(str[i] == alpha){
			count++;
		}
	}
	return count;
}

int main() {
	string str;
	cout<<"Enter any string "<<endl;
	cin>>str;

	char alpha;
	cout<<"Enter charachter to check occurence"<<endl;
	cin>>alpha;

	int count = occur(str,alpha);
	cout<<"number of occurence of "<<alpha<<" is "<<count<<endl;

}

