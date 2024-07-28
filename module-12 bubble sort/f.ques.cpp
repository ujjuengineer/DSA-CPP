// meathod 2: 2 ponter meathod
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // 2 pointer meathod
    int ptr1 = 0, ptr2 = n-1;
    while(ptr1 < ptr2){
        if(arr[ptr1]==0){
            swap(arr[ptr1],arr[ptr2]);
            ptr2--;
            swap(arr[ptr1],arr[ptr2]);
        }
        else{
            ptr1++;
        }
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
