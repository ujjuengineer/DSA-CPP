// note that array are always passed by reference not by value
#include<iostream>
using namespace std;

void display(int a[]){ // yaha 'a' is acting as a pointer
    //cout<< sizeof(a)/sizeof(a[0]); this will generate warning
}

void fun(int a[], int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<' ';
    }
}

int main(){
    int arr[5]={1,4,3,6,76};
    // finding size
    cout<< sizeof(arr)/sizeof(arr[0]) << endl; // if we try to exicute the same in function then error will occur
    
    // so we usually pass size of array too to the pointer
    int arr2[]={1,2,3,4,5};
    int size = sizeof(arr2)/sizeof(arr[0]);
    fun(arr2,size);
}