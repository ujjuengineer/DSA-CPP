#include <iostream>
using namespace std;
int main(){
    int exponent, power;
    cout<<"enter exponene ";
    cin>>exponent;
    cout<<"enter power ";
    cin>>power;
    int mul = 1;
    for(int i = 1; i <= power; i++){
        mul = mul*exponent;
    }
    cout<<exponent<<" raise to the power "<<power<<" is "<<mul;
}