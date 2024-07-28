// write a program to print the elements of both the diagonal in a square matrix
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the size of the square matrix: ";
    cin>> n;
    int arr[n][n];
    // taking input
    cout<< "enter the elements of the square matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0;j <n; j++){
            cin>> arr[i][j];
        }
    }
// for first diagonal i==j
// for second diagonal i+j=n-1, 
    for(int i=0; i<n; i++){
        for(int j=0;j <n; j++){
            if(i==j || i+j==n-1) cout<<arr[i][j]<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}