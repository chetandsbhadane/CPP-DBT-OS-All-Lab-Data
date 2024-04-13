#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int b=30;
	cout<<"a is:"<<a;
	cout<<"b is:"<<b;
	b=b-a;//30-10=20
	a=b+a;//20+10=30
	b=a-b;//30-20=10
	cout<<"a is:"<<a;
	cout<<"b is:"<<b;
	return 0;
}
