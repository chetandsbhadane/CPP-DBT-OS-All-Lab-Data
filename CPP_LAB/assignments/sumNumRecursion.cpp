#include<iostream>
using namespace std;

int sumOfNum(int num){
	if(num==1){
		return 1;
	}
	return num-- + sumOfNum(num);
}

int main()
{
	int num=4;
	cout<<sumOfNum(num);
	return 0;
}


