#include<iostream>
#include<string>
using namespace std;

/*   34. Write a program to copy one structure into another – 
    a. On element by element basis.
    b. Copying an entire structure to another. */

int main(){

	struct Book{
		int id;
		string title;
		double price;
	};

	Book b1;
	b1.id = 101;
	Book b2;
	b2.id = 201;
	b1=b2;
	cout<<"b2 - id "<<b2.id<<endl;
	cout<<"b1 - id "<<b1.id<<endl;
	return 0;
}
