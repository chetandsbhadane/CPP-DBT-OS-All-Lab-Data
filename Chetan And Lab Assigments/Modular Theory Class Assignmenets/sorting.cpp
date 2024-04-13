#include "sorting.h"
#include<iostream>
using namespace std;

void accept(int arr[],int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

}

void sort(int arr[],int size){
	int largest=0;
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] > arr[j]) {
				 largest = arr[i];
				arr[i] = arr[j];
				arr[j] = largest;
			}
		}
	}
}

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
		
	}
}
