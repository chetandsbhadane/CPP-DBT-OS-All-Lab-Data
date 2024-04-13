
#include<iostream>
using namespace std;

int main(){
	
	int num=0;
	int sum=0;
	cout <<"enter 4 digit number:";
	cin >> num;
	while(num!=0){
		int rem = num%10; // 3
		sum = sum+rem;
		num = num/10; // 12
	}
	cout<<"sum is "<<sum;
	return 0;
}
