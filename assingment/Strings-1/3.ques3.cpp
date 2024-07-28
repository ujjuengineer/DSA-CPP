// check weather the given string is palindrome or not
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter your string: ";
    getline(cin, str);
    int n = str.size();
    int a=0, b=n-1;
    bool flag = true;
    while(a<b){
        if(str[a]!=str[b]){
            flag = false;
            break;
        }
        a++; b--;
    }
    if(flag==true)cout<<"its a palindrome";
    else cout<<"not a palindrome";
}