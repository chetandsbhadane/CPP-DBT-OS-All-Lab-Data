
#include<iostream>

using namespace std;

int main() {

	int a=10;
	int b=20;
	int c;
	cout<<"a="<<a;
	cout<<"b"<<b;

	c=a;
	a=b;
	b=c;

	cout<<"a="<<a;
	cout<<"b="<<b;
	return 0;
}
