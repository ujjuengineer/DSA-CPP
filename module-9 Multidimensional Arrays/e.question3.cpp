// write a program to print sum of all the elements of 2d martix
#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4}, {9,0,1,1}, {1,4,2,6}};
    // finding sum
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of the array is : "<<sum;
}