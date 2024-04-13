#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		int rollNo;
		string sName;
		string sCourse;
		int batchNo;
		int sMarks;

	public:
		Student(){
	//		cout<<"Constructor called....wehn object is initialize..."<<endl;
		}

		Student(int rNo,string sNm,string course,int bNo,int marks){
			rNo = rollNo=0;
			sNm = sName= "";
			course = sCourse= "";
			bNo = batchNo= 0;
			marks = sMarks=0;
		}

		void accept(){
			cout<<"Enter Roll No "<<endl;
			cin>>rollNo;

			cout<<"Enter Student Name: "<<endl;
			cin>>sName;

			cout<<"Enter Student Course: "<<endl;
			cin>>sCourse;

			cout<<"ENter Student Batch No: "<<endl;
			cin>>batchNo;

			cout<<"Enter Student Marks: "<<endl;
			cin>>sMarks;
		}

		void Display(){
			cout<<"\nRoll No: "<<rollNo<<endl;
			cout<<sName<<endl;
			cout<<sCourse<<endl;
			cout<<batchNo<<endl;
			cout<<"\nMarks: "<<sMarks<<endl;

		}

		int getRollNo(){
			return rollNo;
		}
		int getMarks(){
			return sMarks;
		}

		string getName(){
			return sName;
		}
};

void sortByRollNo(Student sArr[], int size){
	Student temp;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(sArr[i].getRollNo() > sArr[j].getRollNo()){
				temp = sArr[i];
				sArr[i] = sArr[j];
				sArr[j] = temp;
			}
		}
	}

}

void sortByMarks(Student sArr[], int size){
	Student temp;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(sArr[i].getMarks() > sArr[j].getMarks()){
				temp=sArr[i];
				sArr[i]=sArr[j];
				sArr[j]=temp;
			}
		}
	}
}

void sortByName(Student sArr[],int size){
//	for(){
	
//	}
}

int main(){
	int size;
	
	cout<<"Enter how many students do you want to add? "<<endl;
	cin>>size;
	Student sArr[size];
	//Student s;
	char ch;
	do{
		cout<<"Enter 1.Accept Data\n2.Display Data\n3.Sort By RollNo\n4.sort by marks"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '1':
				{
					for(int i=0;i<size;i++){
						sArr[i].accept();
					}
				};break;

			case '2':
				{
					for(int i=0;i<size;i++){
						sArr[i].Display();
					}
				};break;

			case '3':
				{
					sortByRollNo(sArr,size);
					cout<<"Sorted by Roll Number press 2 to display.."<<endl;
				};break;
			case '4':
				{
					sortByMarks(sArr,size);
						cout<<"Sorted by Mraks press 2 to display.."<<endl;
				};break;
		}			
	}while(ch!='e');

	return 0;
}
