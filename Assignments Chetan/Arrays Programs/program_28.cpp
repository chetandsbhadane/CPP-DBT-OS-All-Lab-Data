#include<iostream>
using namespace std;

/*
Program #27 - Write a program which will calculate multiplication of two 3 by 3 matrices.

    Author: Chetan Bhadane
    Date  : 09-Mar-2024
    Course: DAC 
    
*/

void accept(int arr1[100][100],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr1[i][j];
		}
	}
}

void mul(int arr1[100][100], int arr2[100][100],int res[100][100], int r, int c){
       
       	for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
//                      mult[i][j]=0;
                         for (int k = 0; k < c; k++) {
                                 res[i][j] += (arr1[i][k] * arr2[k][j]);
                         }

                }
        }
}

void dis(int arr1[100][100],int arr2[100][100], int res[100][100],int r,int c){

	cout<<"\narr multiplication.."<<endl;
	for(int i=0;i<r;i++){
        	 for(int j=0;j<c;j++){
                    	cout<<res[i][j]<<" " ;
         	}
        	 cout<<"\n";
	}
}


int main(){

	int arr1[100][100],arr2[100][100],res[100][100],r,c;
	cout<<"Enter rows and cols"<<endl;
	cin>>r>>c;
	
	cout<<"ENter ele in first matrix"<<endl;
	accept(arr1,r,c);
	cout<<"enter ele in sec matrix"<<endl;
	accept(arr2,r,c);

	mul(arr1,arr2,res,r,c);
	dis(arr1,arr2,res,r,c);

	return 0;

}
