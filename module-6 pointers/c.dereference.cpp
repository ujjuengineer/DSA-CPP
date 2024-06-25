#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int* p = &a;
    cout<< *p << endl; // iska mtlv hai p pointer me jo address pra hai uss address pe jao and uss address me jo value hai usko print kr do
cout<<endl;
    // we can also update the value of a using this
    *p = 8; // iska mtlb hai p me pda hua address pe jao and usko update kr do
    cout<<a<<endl; // if we print a again then it will print updated value
cout<<endl;
    // we can also take input using this 
    int a3;
    int* p3 = &a3;
    cout<<"enter a number: " ;
    cin>> *p3; // iska mtlb hua p3 me jo address pda hai uss address me jao and usme input le lo
    cout<< a3+1;
}