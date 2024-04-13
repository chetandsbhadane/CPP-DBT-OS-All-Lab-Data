#include<iostream>
using namespace std;

/*
Program #26 - Write a program to insert an element into an array. Accept position of element to be inserted from user.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void accept(int arr[],int size){
        for(int i=0;i<size;i++){
                cin>>arr[i];
        }
}

void insertArr(int arr[],int &size,int index,int ele){
        size++;
	int i;
	for(i=size-1;i>=index-1;i--){
                 arr[i] = arr[i-1];
	}	        
	
	arr[index-1] = ele;

}

void dis(int arr[],int size){
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

        int index,ele;
        cout<<"Enter a index of ele to insert to an array!"<<endl;
        cin>>index;
	cout<<"Enter a ele to insert arr"<<endl;
	cin>>ele;

        insertArr(arr,size,index,ele);

	 dis(arr,size);
        return 0;
}

