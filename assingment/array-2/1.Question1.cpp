// count the number of element strictly greater than x
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,45,3,15,34,26,31,67,8,9,54,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter the target element: ";
    cin>>target;

    int count = 0;
    for(int i=0; i<n; i++){
        if(target<arr[i]) count++;
    }
    cout<<"total "<<count<<" elements are greater than "<<target;
}