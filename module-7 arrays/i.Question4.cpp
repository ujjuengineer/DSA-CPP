// find the second largest element in the given array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the value of elements : "; 
    // input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    // finding max
    int max = INT_MIN; // it means smallest possible value of an integer
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]){
             max = arr[i];
        }
    }
    
    // finding second max
    int secMax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i] != max && secMax<arr[i]){
             secMax=arr[i];
        }
    }
    cout<<"maximum is : "<<max<<endl;
    cout<<"second max is : "<<secMax;
}