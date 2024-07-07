// find the unique number in a given array where all the elements are being repeates twice with one value being unique
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

    // finding unique element
    int i;
    bool flag;
    for(i=0; i<n; i++){
        flag = false;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j] && i!=j ){
                flag = true;
            }
        }
        if(flag == false) break;
    }
    if(flag == true)cout<<"no unique element found";
    else cout<<"unique element is "<<arr[i];
}