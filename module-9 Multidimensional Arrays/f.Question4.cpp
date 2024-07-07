// write a program to add two matrices
// to add 2 matrices, the order of the matrices must be same
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4}, {9,0,1,1}, {6,1,4,2}};
    int arr2[3][4]={{9,2,1,0}, {1,2,1,1}, {7,3,1,2}};
    // finding sum, will put the sum in first arr, we will not create an extra arr here
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            arr[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    // printing sum arr
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}