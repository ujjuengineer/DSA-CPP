// upper bound
// given a sorted integer array and an integer "X", find the upper bound of x
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int target;
    cout<< "enter target : ";
    cin>> target;
    
    int lo = 0, hi = n-1;
    bool flag = 0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            flag = 1;
            cout<< arr[mid+1];
            break;
        }
        else if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false) cout<<"upper bound is "<< arr[lo];
}