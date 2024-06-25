#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x; // here we stored the address of x in a pointer p
    cout<< &x << endl; // x ka address print hoga
    cout<< p << endl; // p me stored value print hoga          
    // if you notice, both are same this is because humne p me x ka address print kra hai
cout<<endl;
    // similarly for storing float data type address we use float*
    float f = 7.9;
    float* q = &f;
    cout<< &f<< endl;
    cout<< q << endl;     

    // similarly for bool datatype we use bool* and for char datatype we use char* nd so on
}