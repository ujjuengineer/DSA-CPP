#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "enter an integer : ";
    cin>>num;
    float f = (float)num; // yaha humne int input ko float me badal diya
    cout<< "half of the given number is "<<f/2;
}