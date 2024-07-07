// given an array of integers, change the value of all odd indexed element to its second multiple and increment all even indexed values by 10
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

    for(int i=0; i<n; i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else arr[i]=arr[i]+10;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}