// find the element x in the array. take array and x as input
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
    cout<<"enter the element you want to search: ";
    cin>>x;

    //search
    // check mark
    bool flag = false; // false means --> not found
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element found";
    if(flag==false) cout<<"element not found";
}