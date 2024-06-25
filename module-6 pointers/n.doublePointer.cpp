// it is use to store the address a single pointer
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** dubPtr = &ptr;
    *ptr += 3; // we can update x using pointer
    cout<<x<<endl;
    **dubPtr += 4; // we can update x using double pointer also
    cout<<x<<endl;
}