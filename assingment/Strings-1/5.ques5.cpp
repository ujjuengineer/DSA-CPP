// input a string of length less than 10 and convert it into integer without using builtin function
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter string of length less than 10: ";
    getline(cin, str);
    int n = str.size();
    int num = 0;
    for(int i=0; i<n; i++){
        int x = int(str[i]); // this will convert 0->48, 1->49, 2->50
        num = ((num*10) + x - 48); // so we are subtracting 48 so that our integer meets our requirement
    }
    cout<<num;
}