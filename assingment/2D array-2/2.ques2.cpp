//write a program to rotate the matrix by 90 degree anti-clockwise
/*
clockwise rotate krna hota hai to we use to flip elements along 1st diagonal, and then we use to reverse the row
for anticlock wise rotation we will flip the elements along 2nd diagonal, then we will reverse the row
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the size of the square matrix: ";
    cin>> n;
    int arr[n][n];
    
    // taking input
    cout<< "enter the elements of the square matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0;j <n; j++){
            cin>> arr[i][j];
        }
    }
cout<< endl;
    // flipping elements along 2nd diagonal
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                int temp = arr[i][j];
                arr[i][j]=arr[n-1-j][n-1-i];
                arr[n-1-j][n-1-i]=temp;
            }
        }
    // reversing each row
        for(int i=0; i<n; i++){
            int a=0, b=n-1;
            while(a<b){
                int temp = arr[i][a];
                arr[i][a]=arr[i][b];
                arr[i][b]=temp;
                a++; b--;
            }
        }
    // printing
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
}