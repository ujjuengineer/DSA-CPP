//leetcode 48
// write a program to rotate the matrix by 90 degrees clockwise
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    // 1 2 3      1 4 7         7 4 1
    // 4 5 6  ==> 2 5 8   ==>   8 5 2
    // 7 8 9      3 6 9         9 6 3
    

    // algorithm: first transpose the matrix and then reverse its each row

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i!=j){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;
            }
        }
    }
//reversing rows
    for(int i=0; i<n; i++){
        int a=0; int b=n-1;
        while(a<b){
            int temp = arr[i][a];
            arr[i][a]=arr[i][b];
            arr[i][b]=temp;
            a++; b--;
        }
    }

    // printing rotated matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}