// 38. Write a single function “Multiply” to multiply two or three or four integers passed depending on call. Use default value arguments.
#include<iostream>
using namespace std;

int multiply(int a,int b,int c=1, int d=1){
	return (a*b*c*d);
}
int main(){

	cout<<multiply(1,2)<<endl;
	cout<<multiply(1,2,3)<<endl;
	cout<<multiply(1,2,3,4)<<endl;
	return 0;
}
