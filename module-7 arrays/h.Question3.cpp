// find the maximum value out of all the elements in the array
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
    cout<<"maximum value out of all the elements is: "<< max;
}