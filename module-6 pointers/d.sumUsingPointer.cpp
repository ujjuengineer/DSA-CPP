#include <iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x;
    int* p2  = &y;
    cout<<"enter first and second num: ";
    cin>> *p1 >> *p2;
    cout<< x+y << endl;
    // we can also do like 
    cout<< *p1 + *p2;
}