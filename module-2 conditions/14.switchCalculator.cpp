#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char ch;
    cout<<"enter your equation ";
    cin>>num1>>ch>>num2;
    switch(ch){
        case '+' :
            cout<<num1 + num2;
            break;
        case '-':
            cout<< num1 - num2;
            break;
        case '*' :
            cout<< num1 * num2;
            break;
        case '/':
            cout<< num1/num2;
            break;
    }
}