#include<iostream>
using namespace std;
int main() {
    cout<<"enter a number ";
    int n;
    cin >> n;
    if(n>99 && n<1000){
        // if condition 1 is false then compiler won't check for condition 2 
        cout<<"three digit number";
    }
    else{
        cout<<"not a three digit number";
    }
}