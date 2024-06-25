#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    *ptr = *ptr + 1; // we can update the value of x in this way
    cout<<x<<endl;
    // but if we use incriment decriment operator in *ptr it will generate warning
    // *ptr++; 
    // so to use incriment decriment operator we use bracket
    (*ptr)++;
    cout<<x;
}