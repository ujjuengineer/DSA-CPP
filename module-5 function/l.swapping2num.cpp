#include<iostream>
using namespace std;
int main(){
    int a=4, b=8;
    // we can swap them using third variable
    // int c=a;
    // a=b;
    // b=c;
    // cout<<a<<' '<<b;
    
    // but there is an algorithm to swap two number without any variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}