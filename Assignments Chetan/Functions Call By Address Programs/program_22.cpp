#include<iostream>

using namespace std;

//Write a program to accept date, month, year from the user in a function called getDate(), and print that date in main() in dd/mm/yy format.

void getDate(int *d, int *m, int *y){
	
	cout<<"Enter Date: "<<endl;
	cin>>*d;

	cout<<"Enter month: "<<endl;
	cin>>*m;

	cout<<"Enter year: ";
	cin>>*y;
}

int main(){

	int d=0,m=0,y=0;

	getDate(&d,&m,&y);
	
	cout<<d<<"/"<<m<<"/"<<y<<endl;

	return 0;
}
