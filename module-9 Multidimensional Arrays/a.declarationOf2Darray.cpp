#include<iostream>
using namespace std;
int main(){
    int arr[4][3]; // this will create a 2D array with 4 row and 3 columbs
    // rows: 3 --> 0,1,2,3
    // col: 3 --> 0,1,2
    arr[0][0]=4; // (0,0) cell me 4 value dal gyi

    // we can also declare it as follow
    int arr2[3][4]={{1,2,3,4}, {9,0,1,1}, {1,4,9,6}}; // 3 rows and 4 columbs
    // above declaration can also be done as {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}

    // we can ignore the size of rows during initialising the matrix
    int arr3[][3]={{1,2,3}, {1,2,3}, {1,2,3}}; // we can create as many rows we want

    // printing array
    for(int i=0; i<3; i++){ // i-> rows
        for(int j=0; j<4; j++){
            cout<<arr2[i][j]<<" "; // pehle row me jao and sare col ele print kr do
        }
        cout<<endl; // first row print krne k baad endl de diya
    }
} 