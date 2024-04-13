#include<iostream>
#include<string.h>
using namespace std;

/*
Define a structure “Book” having members – bookId, title, price.  Use typedef to name this structure “BOOK”. 
Accept the data for a book and display the record.*/
int main(){

	//create struct variable called BOOK
	struct {
		int bookId;
		string title;
		double price;

	}BOOK;


	cout<<"ENter bookId"<<endl;
	cin>>BOOK.bookId;

	cout<<"Enter title"<<endl;
	cin>>BOOK.title;

	cout<<"Enter price"<<endl;
	cin>>BOOK.price;

	cout<<"Bookid- "<<BOOK.bookId<<"title- "<<BOOK.title<<"Price- "<<BOOK.price<<endl;

	return 0;
}
