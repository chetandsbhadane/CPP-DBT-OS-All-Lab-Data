#include<iostream>

using namespace std;

//Write a program which accepts two integers in main(). Pass these as arguments to function max(). In max(),
// find the maximum of these two numbers and using a return statement, return the address of the maximum number and print it in main().


int max2(int *no1,int *no2){
	return *no1>*no2?*no1:*no2;
}
int main(){

	int no1,no2;
	cout<<"Enter number 1"<<endl;
	cin>>no1;
	cout<<"Enter number 2"<<endl;
	cin>>no2;

	int res = max2(&no1,&no2);
	cout<<res<<endl;

}
