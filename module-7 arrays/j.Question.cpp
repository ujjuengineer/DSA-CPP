// count the number of elements in given array greater than a given number x
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

    int x;
    cout<<"enter the number: ";
    cin>>x;
    // finding number greater than x
    int count = 0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x) count++;
    }
    cout<<"total number of elements greater than "<<x<<" are "<<count;
}