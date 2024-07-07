// write a program to print the transpose of the matrix entered by the user and store it in a new matrix
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4}, {9,0,1,1}, {6,1,4,2}}; int m=3, n=4;
    // 1 2 3 4
    // 9 0 1 1
    // 6 1 4 2
/*
    transpose is 1 9 6
                 2 0 1
                 3 1 4
                 4 1 2
*/
    // printing transpose
    for(int j=0; j<n; j++){ // pehle columb print kr denge then row
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // let store this transpose into another array t
    int t[n][m]; // if arr is m*n then its transpose is n*m
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j]=arr[j][i];
        }
    }
    // printing transpose array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}