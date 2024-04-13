#include <iostream>
using namespace std;
int main()
{
	int num=10;
	int n1=0;
	int n2=1;
	int sum=0;
	cout<<n1<<endl;
	cout<<n2<<endl;
	for(int i=1;i<10;i++){
		
		sum=(n1+n2);
		cout<<sum<<"\n";
		n1=n2; //n1=1
		 //n2=1
		n2=sum;
		
	}
	
	return 0;
}
