#include<iostream>
using namespace std;
// class Sample{
// private : const int k;
// public:
// Sample():k(10){}
// };

	// class Sample{
	// private : const int k;
	// public:
	// Sample(){  k=10}
	// };
	
class Sample{
	private: 
		const int k=1;//k is data member of class sample
	public:
		Sample():k(10)
		{
			
	     	}
		
		void dis(){
			cout<<"\nvalue of const int k is "<<k<<endl;
		}
	
};


int main(){

	Sample s1;

	s1.dis();

 return 0;

}
