#include<iostream>
using namespace std;
int main(){
    // 1 2 3    we have to print as 1 4 7 8 5 2 3 6 9
    // 4 5 6
    // 7 8 9
    int m,n;
    cout<<"enter the row and col of the matrix: ";
    cin>>m>>n; 
    int matrix[m][n];
    cout<<"enter the element of the matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    // printing, iss baar 1st col me jaa ke sare row print krenge
    for(int j=0; j<n; j++){
        if(j%2==0){// if col is even then uper se print krenge
            for(int i=0; i<m; i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{// if col is odd then printing will start form below
            for(int i=m-1; i>=0; i--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
}