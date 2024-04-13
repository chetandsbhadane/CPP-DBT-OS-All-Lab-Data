//Implement function “Swap” to swap to integers. Use call by reference.
#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;	

	cout<<"a - "<<a<<"b- "<<b;

	swap(&a,&b);

	cout<<"a - "<<a<<"b- "<<b;
	return 0;
}
