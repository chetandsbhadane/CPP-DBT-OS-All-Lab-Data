/*Write a program to accept marks of a student in ‘n’ subjects. Allocate the space for the array of marks dynamically. Display average of marks.
Use cin, cout, new, delete.*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cout<<"Enter how many subject's marks do you want to add?"<<endl;
	cin>>n;
	//new keyword to create memory dynamically
	int *arr = new int[n];

	int total=0;
	double avg=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		total = total + arr[i];
	}
	avg = total/n;
	cout<<avg<<endl;

	cout<<"before - "<<*arr<<endl;
	//delete keyword to deallocate the memory..
	delete[] arr;
	cout<<"after - "<<*arr<<endl;

	return 0;
}
