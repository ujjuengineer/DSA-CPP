#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char ch;
    cout<<"enter your equation ";
    cin>>num1>>ch>>num2;
    if(ch=='+'){
        cout<< num1 + num2;
    }
    else if(ch=='-'){
        cout<<num1-num2;
    }
    else if(ch=='*'){
        cout<<num1*num2;
    }
    else if(ch=='/'){
        cout<<num1/num2;
    }
}