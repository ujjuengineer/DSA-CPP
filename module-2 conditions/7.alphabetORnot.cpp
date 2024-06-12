#include<iostream>
using namespace std;
int main() {
    cout<<"enter a character ";
    char ch;
    cin >> ch;
    int i = (int)ch;
    if((i>=65 && i<=90) || (i>=97 && i<=122)){
        cout<<ch << " is an alphabet"<<" having ascii value = "<< i;
    }
    else cout<<ch << " is not an alphabet";
}