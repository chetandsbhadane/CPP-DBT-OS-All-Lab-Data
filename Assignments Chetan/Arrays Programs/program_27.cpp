#include<iostream>
using namespace std;

/*
Program #27 - Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to perform the tasks.
    a. Find the transpose of a matrix and print the transpose using display() function.
    b. Accept another matrix of same dimensions.  Find the addition of two matrices and print the resultant matrix.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void accept(int arr[100][100], int r, int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}

}

void transpose(int arr[100][100], int r, int  c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			 int temp = arr[i][j];  
           		 arr[i][j] = arr[j][i];  
            		 arr[j][i] = temp; 
		}
	}

	cout<<"\ntrasnpose matrix"<<endl;
	for(int i=0;i<c;i++){
                for(int j=0;j<r;j++){
                        cout<<arr[i][j];
                }
                cout<<"\n";
        }

}

void mul(int arr[100][100], int arr2[100][100],int mult[100][100], int r, int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
//			mult[i][j]=0;
			 for (int k = 0; k < c; k++) {
                   		 mult[i][j] += (arr[i][k] + arr2[k][j]);
           		 }                    
                       
		}
	}

	cout<<"\narr multiplication.."<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mult[i][j]<<" " ;
		}
		cout<<"\n";
	}

}
int main(){
	
	int arr[100][100];
	int arr2[100][100];
	int mult[100][100];
	int r,c;
	cout<<"Enter Number of rows and col"<<endl;
	cin>>r>>c;

	accept(arr,r,c);
	transpose(arr,r,c);
	


	cout<<"\nMatrix Multiplication"<<endl;
	cout<<"\nENter r and c"<<endl;
	cin>>r;
	cin>>c;
	cout<<"\nEnter first matrix ele"<<endl;
	accept(arr,r,c);
	cout<<"\nEnter sec matric ele"<<endl;
	accept(arr2,r,c);

	mul(arr,arr2,mult,r,c);

	return 0;

}
