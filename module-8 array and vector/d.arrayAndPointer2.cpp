#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int* ptr = arr; // giving address of arr to pointer
    cout<< *ptr<<"\n"; //same as cout<< ptr[0]; this printed out first element of array this is because avi pointer me array ka address hai and we know address of array = addr. of 1st element

    // how can we access the 2nd or 3rd element of arr using *ptr ??
    // if we do ++ptr, it will increase the address by 4 bytes and then we can acces the 2nd element of the arr

    // printing arr using *ptr
    for(int i=0; i<=4; i++){
        cout<< *ptr <<" ";
        ptr++;
    }
    cout<<endl;

    // updating 4th element using *ptr
    ptr = arr; // this will again assign the address of first element
    ptr += 3; // now pointer is on 4th element of array
    *ptr = 9; // this will update the 4th element of array
    ptr -= 3; // now again we assignes the first element address to the pointer
    cout<< ptr[3]<<endl; // printing updated value of 4th element 
    
    /*
    note 1: we don't use ptr to update or print the array, 
    we generally use ptr[0 or 1 or 2..] to update or print the array element

    note 2: arr[i] = ptr[i] = i[ptr] = i[arr]
    */
}