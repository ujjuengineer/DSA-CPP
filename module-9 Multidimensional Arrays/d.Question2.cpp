// write a program to find the largest element of a given 2D array of integers
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4}, {9,0,1,1}, {1,4,92,6}};
    // finding largest element
    int lar = arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]>lar){
                lar = arr[i][j];
            }
        }
    }
    cout<<"largest element of the array is : "<<lar;
}