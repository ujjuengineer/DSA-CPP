#include<iostream>
using namespace std;

void call(int* ptr){ // this is a normal pointer that we generally create for storing address, but in array we can create another pointer(refer file a2)
    for(int i=0; i<=3; i++){
        cout<< ptr[i]<<" ";
    }
    cout<<"\n\n";
}

void update(int* ptr){
    ptr[0]=5; // this is how we update the array element, if we do *ptr[0]=5, this will show error
}

int main(){
    int arr[]={1,2,3,4};
    call(arr); // this is how we send address to the  pointer, if we do call(*arr); this will show error
    update(arr);
    call(arr);
}

