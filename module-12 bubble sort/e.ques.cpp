// push zeroes to end while maintaining the relative order of other elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // we can use 2 pointer meathod or bubble sort meathod to do so, but in 2 pointer meathod the relative order is not maintained, so that's why bubble sort meathod is useful
    // bubble sort meathod
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // in next file there is 2 pointer meathod
}
