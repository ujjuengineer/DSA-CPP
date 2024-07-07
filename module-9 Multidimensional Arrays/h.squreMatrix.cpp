// you have given a matrix of size n*n. change this matrix into its transpose without using extra arary
#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,2},{4,5,6,5},{7,8,9,3},{4,7,8,4}};
    int n=4;
    // 1 2 3 2       1 4 7 4
    // 4 5 6 5 ==>   2 5 8 7
    // 7 8 9 3       3 6 9 8
    // 4 7 8 4       2 5 3 4
    
    // if you notice the digonal 1,5,9,4 is unchanged, we just have to interchange 
    // 2,4; 3,7; 6,8; 2,4; 5,7; 3,8;

    // so for interchanging 2,4 we just have to visit at 3 only not at 4, similarly with all these element. so we will make loop according to that
   
    for(int i=0; i<n; i++){ // first row se 2nd last row tak jana hai
        for(int j=0; j<i; j++){

            if(i!=j){
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    // printing transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}