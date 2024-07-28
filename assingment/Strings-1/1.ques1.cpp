// input a string of size n and update all the odd position in the string to character '#'. consider 0-based indexing
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<< "enter your string: ";
    getline(cin, str);
    int n = str.size();
    for(int i=1; i<n; i+=2){
        str[i]='#';
    }

    cout<<str;
}