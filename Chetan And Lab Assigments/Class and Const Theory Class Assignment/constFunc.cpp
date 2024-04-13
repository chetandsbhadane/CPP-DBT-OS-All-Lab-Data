#include<iostream>
using namespace std;

	class Add{
		private:
			int i,j;
		public:
	void Accept() {
		cout<<"\nEnter real and img part";
		cin>>i>>j; }
 	
	void Display() const{ 	
		cout<<"\n"<<i<<" "<<j;
		//i= i+1;  //Generate  error
 	}
};
	
int main()
{
		Add c1;
		c1.Accept(); 
		c1.Display();
	return 0;
	
}
