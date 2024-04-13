/*Dynamic Memory Allocation

    30. Write a program that calculates the average marks of all the subjects.  
 The number of subjects ‘n’ is accepted from the user.  Allocate memory dynamically for ‘n’ integers.  Free the memory when not in use.*/

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"How many subjects do you want to add?";
	cin>>n;

	//new keyword is used in cpp to allocate memory dynamically.
	int *ptrArr = new int[n] ;

	for(int i=0;i<n;i++){
		cin>>ptrArr[i];
	}

	double avg=0,sum=0;
	for(int i=0;i<n;i++){
		sum = sum + ptrArr[i];
	}
	avg = sum/n;
	cout<<avg;

	//delete keyword in cpp is to de-allocate the memory which is created dynamically..
	delete[] ptrArr;

	//cout<<ptrArr[n]<<endl;
	return 0;
}
