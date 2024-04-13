#include<iostream>
#include  "sorting.h"
using namespace std;


int main() {
	int size;
	
	cout<<"Enter a array size"<<endl;
	cin>>size;

	int arr[size];
	
	cout<<"Aceepting Array!!"<<endl;
	accept(arr, size);

	cout<<"Sorting Array!!"<<endl;
	sort(arr,size);

	cout<<"Sorted Array!!"<<endl;
	display(arr,size);

	return 0;

}
