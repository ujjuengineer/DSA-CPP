// check if the given array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // checking sorted or not
    int flag = true;
    for(int i=1; i<n; i++){
        if(arr[i-1]<arr[i]) flag = true;
        else{
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<"not a sorted array";
    else cout<<"array is sorted";
}