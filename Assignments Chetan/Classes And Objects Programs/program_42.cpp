#include<iostream>
#include<cstring>
using namespace std;


/* 42. Write a class Employee for an application which will have data members for employee id, employee name and salary. Provide the following functionalities in Employee class.
	1. Initialing objects using default and parameterized constructors.
	2. Accepting and displaying the information of employee from console
	
	class Employee
	{
		int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee();
		Employee(int, char*, double);
		void Accept();
		void Display();
	};

In "main" function declare an array of Employee objects. Write a menu driven program to -
	a. Insert record into an array.
	b. Update information of specific employee on the basis of emp_id accepted from user
	c. Display all records */
class Employee{
	private:
	       	int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee(){
			emp_id=0;
			emp_name[0]='\0';
			salary = 0.0;
		
		}

		Employee(int id,const char* name, double sal){
			emp_id = id;
			strcpy(emp_name,name);
			salary = sal;
		}

		void accept(){
			cout<<"Enter id"<<endl;
			cin>>emp_id;
			cout<<"Enter name"<<endl;
			cin.get();
			cin.getline(emp_name,20);
			cout<<"salary"<<endl;
			cin>>salary;
		}

		void dis(){
			cout<<"id - "<<emp_id<<"name - "<<emp_name<<"salary - "<<salary<<endl;
		}
	

};
int main(){
	Employee e(10,"s",1200);
	e.dis();
//	Employee e1;
//	e1.accept();
//	e1.dis();
	return 0;
}
