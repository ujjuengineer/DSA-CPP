// Given an array, predict if array contains duplicates or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    bool duplicate = false;
    for(int i=0; i<n; i++){
        int temp = arr[i];
        for(int j=i+1; j<n; j++){
            if(temp == arr[j]) 
            duplicate = true;
        }
    }
    if(duplicate==true) cout<<"duplicates found";
    else cout<<"duplicates not found";
    
}