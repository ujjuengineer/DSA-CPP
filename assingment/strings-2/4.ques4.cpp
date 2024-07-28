//Given an array of strings. check wether they are anagrams or not
// input: s="car" t="arc" --> output TRUE
// input: s="book" t="hook" --> output FALSE
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<< endl<<"enter first string : ";
    getline(cin, s);
    int n = s.size();

    string t;
    cout<<"enter second string : ";
    getline(cin, t);
    int m = t.size();

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if(s==t) cout<< "its a valid anagram";
    else cout<<"its not an anagram";
    
}