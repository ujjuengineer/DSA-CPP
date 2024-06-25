// calculate the sum of all the elements in the given array
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

    //output
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<"sum of the elements of the array are : "<<sum;
}