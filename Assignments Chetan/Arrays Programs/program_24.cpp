#include<iostream>
using namespace std;

/*
Program #24 - Accept five integers in an array and use separate functions to:
    a. Find maximum and minimum of the integers. Do not sort the array.
    b. Multiply each element of the array by 5 and store it in another array and display it.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/
void accept(int arr[], int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

int maxInt(int arr[],int size){
	int largest = arr[0];
	for(int i=0;i<size;i++){
		if(largest < arr[i]){ //33 44 22 66 11.  
			largest = arr[i];
		}
	}
	return largest;
}

int minInt(int arr[],int size){
        int smallest = arr[0];
        for(int i=0;i<size;i++){
                if(smallest > arr[i]){ //33 44 22 66 11.
                        smallest = arr[i];
                }
        }
        return smallest;
}

void mult(int arr[],int size){
	int arr2[size] = {0,0,0,0,0};
	for(int i=0;i<size;i++){
		arr2[i] += arr[i]*5;
		cout<<arr2[i]<<endl;
	}
	
}

int main(){
	int size=5;
	int arr[size];

	accept(arr,size);

	int largInt = maxInt(arr,size);
	cout<<"\nLargest Ele of the arry is "<<largInt<<endl;

	int smallInt = minInt(arr,size);
        cout<<"\nSmallest Element in the array is "<<smallInt<<endl;
	
	cout<<"\nMultplication is "<<endl;
	mult(arr,size);
	return 0;
}
