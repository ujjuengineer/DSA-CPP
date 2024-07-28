// input a string of length n and count all the consonants in the given string
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter your string: ";
    getline(cin, str);
    int n = str.size();
    int count = 0;
    for(int i=0; i<n; i++){
        int x = int(str[i]);
        if(str[i]<='Z' && str[i]>='A' || str[i]<='z' && str[i]>='a'){
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
            }
        }
    }
    cout<<"total number of consonant in your string is: "<<count;
}