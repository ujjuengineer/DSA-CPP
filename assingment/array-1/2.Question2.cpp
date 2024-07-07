// find the second largest element in the given array in one pass
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

    // first we will find out the largest then we will find second largest
    int lar = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>lar) lar = arr[i];
    }
    cout<<"largest among them is: "<< lar << endl;

    int secLar=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>secLar && arr[i] != lar) secLar = arr[i];
    }
    cout<<"second largest among them is : "<< secLar;
}