#include<iostream>
#include<string>
using namespace std;
/*
41. Write a class Array which will store integer elements in dynamically allocated space. 
class Array
{
	int size;
	int *arr;
}
Provide below functions in Array class - 
 1. Default constructor - Take 5 as default size. Initialize the array elements to 0
 2. Parameterized constructor - Takes size as parameter. Initialize the array elements to 0.
 3. Copy constructor - Performs deep copy of Array object.
 4. Destructor - Deletes memory which is allocated dynamically.*/
class Array{
	public:
		int size;
		int *arr;
	
	
		Array():size(5),arr(0){
			cout<<size<<" "<<arr<<endl;	
		}

		Array(int s){
			this->size= s;
			arr= new int[this->size];
		}

		Array(Array &src){
			//copy size;
			this->size = src.size;
			//create seperate memory
			this->arr = new int[this->size];
			//copy contents of memory
			for(int i=0;i<src.size;i++){
				this->arr[i] = src.arr[i];
			}
		}
		
		void dis(){
			for(int i=0;i<size;i++){
				cout<<"\t"<<arr[i];
			}
		}

		~Array()
		{
		 	delete []arr;
		}

};

int main(){
	Array a;
	Array a1(5);
	a1.arr[0] = 1;
	Array a2(a1);
        cout << "t: " << a1.size << " " << a1.arr[0] << endl;
        cout << "t2: " << a2.size << " " << a2.arr[0] << endl;


	return 0;
}
