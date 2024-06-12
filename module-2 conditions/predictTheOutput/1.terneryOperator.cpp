#include<iostream>
using namespace std;
int main(){
    char x;
    int a = 2;
    x = (a > 0) ? 'a' : 's' ;
    // iska mtlb hai if a>0 then x = a else x = s 
    cout<< "value of x : " << x << endl;
    cout<<"value of a : " << a;
}