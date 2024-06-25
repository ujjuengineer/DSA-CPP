#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    cout<< *ptr <<endl; // 5 print kr dega
    ptr = ptr + 1;
    cout<< *ptr <<endl; // this will give any random garbage value

// this is because ptr = ptr + 1 krne k baad address 4 byte se badh gya, but uss new address me kuch pda hua hai hi nhi so if we print the value then obvisly it will print any garbage value
}