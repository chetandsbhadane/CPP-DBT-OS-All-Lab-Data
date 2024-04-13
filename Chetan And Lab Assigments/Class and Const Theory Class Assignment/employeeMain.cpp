#include<iostream>
#include<string>
using namespace std;

class Employee{
	private:
	       	int empId;
	        string empName;
		int empSal;
		static int counter;

	public:
		Employee()
		{
		//	cout<<"ctor called!!";		
			counter++;	
		}

		Employee(int eId,string eName,int eSal){
			eId = empId;
			eName = empName;
			eSal = empSal;
			counter++;
		}

		static void printCounter(){
			cout<<"Number of Objects are: "<<counter<<" ";
		}
		
};

int Employee::counter=0;

int main(){
	
	Employee e,e3,e4;

	Employee e1(1,"Emp1",50000);

	Employee * e2 = new Employee;	

	Employee::printCounter();

//	printCounter();


	return 0;
}
