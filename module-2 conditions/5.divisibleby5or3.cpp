#include<iostream>
using namespace std;
int main() {
    cout<<"enter a number ";
    int n;
    cin >> n;
    if(n%3==0 || n%5==0){
        //here if condition 1 is true then compiler wont check for condition 2
        cout<<"divisible by 5 or 3";
    }
    else{
        cout<<"neither divisible by 5 nor by 3";
    }
}