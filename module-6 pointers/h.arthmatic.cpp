#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    cout<<ptr<<endl; //0x16b39f26c
    ptr = ptr + 1;
    cout<<ptr<<endl; //0x16ba27270
    /* if you notice the address then the difference is of 4 bytes. this is hexadecimal system consisting 16 digit 
    0 1 2 3 4 5 6 7 8 9 a b c d e f */
}