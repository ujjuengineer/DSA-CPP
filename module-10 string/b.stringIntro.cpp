#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ujjwal"; // this ujjwal is nothing but 6 character, similarly string is like vector, vector is array with expandable space. similarly string is like a expandable memeory of characters.
    // note that, string and array of string is 2 different things, 
    //if we do "string arr[n]" this will create array of strings which will take input of n strings, where as if we do "string str;" this create actual string

    // if you scroll your pointer to "ujjwal", it will show 7 character, this is because compiler is adding \0 at end as extra variable

    // taking input in string
    string s;
    // cin>>s; // this will only work if given string have no space
    // so we use getline(cin, string name);
    getline(cin,s);
    cout<<"your string is: "<< s;

}