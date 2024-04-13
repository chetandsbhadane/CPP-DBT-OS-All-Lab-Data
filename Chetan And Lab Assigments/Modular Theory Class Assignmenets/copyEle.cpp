#include<iostream>
using namespace std;


void accept(char *arr,int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void copy(char *arr,int size){
	char arr2[size];
	for(int i=0;i<size;i++){
		arr2[i] = arr[i];
	}
}

void print(char *arr2,int size){
	cout<<"\nElemets of array 1 are copied into array 2.."<<endl;
	for(int i=0;i<size;i++){
		cout<<arr2[i]<<endl;
	}
}

int main(){

	int ele;
	cout<<"Enter how many elements do you want to add?"<<endl;
	cin>>ele;

	char arr[ele];

	accept(arr,ele);

	copy(arr,ele);

	print(arr,ele);

	return 0;
}
