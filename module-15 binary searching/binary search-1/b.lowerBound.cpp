// lower bound
// given a sorted integer array and an integer "x", find the lower bound of x
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    // let targer is 20, so we have to return number just less than 20
    int target;
    cout<<"enter target: ";
    cin>>target;
    
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            // agar target mil gya then usse just ek kam print kr do
            cout<< arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo = mid+1;
    }
    // agar target nhi mila then last me jaha hi hoga whi mera lower bound hoga
    if(flag==false) cout<< arr[hi];
    
}
