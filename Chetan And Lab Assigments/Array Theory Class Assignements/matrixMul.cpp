#include<iostream>
using namespace std;


void accept(int arr[100][100],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			
				cin>>arr[i][j];
			
		}
	}	
}

void display(int arr[100][100], int r,int c){
	 for(int i=0;i<r;i++){
         	for(int j=0;j<c;j++){
                      
                        cout<<arr[i][j]<<" ";
		      
                }
        }

}

void mul(int arr[100][100], int r, int c){

	  for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
 			 arr[i][j] = 0;

               		 for (k = 0; k < col1; k++) {
                   		 arr[i][j] = arr[i][j] + (m1[i][k] * m2[k][j]);
           		 }                    
                       // cout<<arr[i][j]<<" ";
                      
                }
        }

}

int main(){
	
	int arr[100][100];
	int r,c;
	cin>>r>>c;
	accept(arr,r,c);
	display(arr,r,c);
	return 0;
}
