// write a program to print the matrix in wave form
#include<iostream>
using namespace std;
int main(){
    // 1 2 3    we have to print as 1 2 3 6 5 4 7 8 9
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

    // printing in wave form
    for(int i=0; i<m; i++){
        if(i%2==0){// line is even
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{// when line is odd
            for(int j=n-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
}