#include<iostream>
using namespace std;
int main (){
    int arr[5]; // jese hi humne array define kra wese hi memory me ek saath 5 element k liye address allocate ho gya.
    cout<< &arr << endl; // array ka address is same as the address of first bytes of its first element 
    cout<< &arr[0]<<endl;
    cout<< &arr[1]<<endl;
    cout<< &arr[2]<<endl;
    cout<< &arr[3]<<endl;
    cout<< &arr[4]<<endl;
}