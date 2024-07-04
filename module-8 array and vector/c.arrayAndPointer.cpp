#include<iostream>
using namespace std; 
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr = arr; // this will store the address of the array
                    // if we do int* ptr = &arr; this will show error
    int* ptr1 = &arr[0]; // this will store the address of first element of array
                         // if we do int* ptr = arr[0]; this will show error
    
    // for updating value using pointer we used to use *ptr = 4 but in array we update as follow
    ptr[0]=4; // *ptr[0] = 4; will give error
    
    // we can also print using ptr
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<","; // note: in general we use *ptr to print 
    }
    cout<<"\n\n";
}