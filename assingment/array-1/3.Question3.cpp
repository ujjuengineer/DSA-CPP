// find the minimum value out of all element in the array
#include<iostream>
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

    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]< min) min = arr[i];
    }
    cout<< min;
}