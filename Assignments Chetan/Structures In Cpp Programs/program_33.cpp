#include<iostream>
#include<string>
using namespace std;

//Modify above assignment - 32 to hold record of five books.  Display the records of all the books using a function. 

int main(){

	struct Book{
		int bookId;
		string title;
		double price;
	};

	Book b[5];

	for(int i=0;i<5;i++){
		cout<<"Enter bookid"<<endl;
		cin>>b[i].bookId;
		cout<<"Enter title"<<endl;
		cin>>b[i].title;
		cout<<"Enter price"<<endl;
		cin>>b[i].price;
	}

	for(int i=0;i<5;i++){
		cout<<"bookid- "<<b[i].bookId<<"title"<<b[i].title<<"price"<<b[i].price<<endl;
	}
		

	return 0;
}
