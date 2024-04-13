
#include<iostream>
using namespace std;

int main(){
	
	int num=0;
	cout<<"enter a number";
	cin>>num;
	int sum=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum = sum+i;	
		}
	}		

	if(num==sum){
		cout<<"it is a perfect no!";
	}
	else{
		cout<<"Not Perfect!";
	}
	return 0;

}
