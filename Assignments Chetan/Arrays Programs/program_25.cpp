#include<iostream>
using namespace std;

/*
Program #25 - Write a program to delete an element from a user entered array. Accept position of element to be deleted from user.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void accept(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void deleteArr(int arr[],int &size,int del){
	for(int i=del-1;i<size;i++){
		arr[i] = arr[i+1];
	
	}
	size--;
	cout<<size<<endl;

}

void dis(int arr[],int &size){
	for(int i=0;i<size;i++){
                cout<<arr[i]<<endl;
        }

}
int main() {

	int size;
	cout<<"Enter array size"<<endl;
	cin>>size;

	int arr[size];
	accept(arr,size);

	int delElm;
	cout<<"Enter a element to delete from an array!"<<endl;
	cin>>delElm;

	deleteArr(arr,size,delElm);

	dis(arr,size);
	return 0;
}

