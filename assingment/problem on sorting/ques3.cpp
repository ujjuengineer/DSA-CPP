// given an integer array and an integer k where k<=size of array, we need to return the kth smallest element of the array
/*
Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4 
Output: 10 */

#include<iostream>
using namespace std;
int main(){
    int arr[]={7, 10, 4, 3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    // using selection sort
    int count = 0;
    for(int i=0; i<n-1; i++){
        int mini = INT_MAX;
        int mindex = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<mini){
                mini = arr[j];
                mindex = j;
            }
        }
        count++;      
        swap(arr[mindex], arr[i]);
        if(count==k){
            cout<< arr[i]<< endl;
            break;
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<< arr[i]<<" ";
    // }
}