//Q.1. write a program to add two matrix and save the result in one of the given matrices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // to add 2 matrices the size must be same
    int n,m;
    cout<< "enter the size of the matrix; ";
    cin>> n>>m;
    int arr[n][m];
    int brr[n][m];
    // taking input in first matrix
    cout<< "enter the elements of first matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    // taking input in second matrix
    cout<<"now enter the elements of second matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> brr[i][j];
        }
    }

    // adding arr and brr
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }

    // printing sum
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
    }
}