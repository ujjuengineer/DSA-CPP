// write a program to print the matrix in wave form
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
    int lorow=0, locol=0, hirow=n-1, hicol=n-1;
    while(lorow<=hirow && locol <= hicol){
        for(int j=locol; j<=hicol; j++){
            cout<< arr[lorow][j]<<" ";
        }
        lorow++;
        if(lorow>hirow)break;

        for(int i=lorow; i<=hirow; i++){
            cout<< arr[i][hicol]<<" ";
        }
        hicol--;
        if(lorow>hirow)break;

        for(int j=hicol; j>=locol; j--){
            cout<<arr[hirow][j]<<" ";
        }
        hirow--;
        if(lorow>hirow)break;

        for(int i=hirow; i>=lorow; i--){
            cout<< arr[i][locol]<<" ";
        }
        locol++;
    }
    
}