#include<iostream>
#include<string>
using namespace std;
int main(){
    // char array
    char str[] = {'a','b','c','d','e'}; // this is basically array of character
    // compiler apne aap se iss array ke end me '\0'(null) character add kr deta hai, and uske baad eliminate kr deta hai array ko

    // we can print this string as
    for(int i=0; i<=4; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    // 2nd meathod: as we know compiler apne aap ek character \0 add kr deta hai array me, so we can use this
    int i =0;
    while(str[i]!='\0'){
        // null char end me hoga, and jese hi loop waha tak pahuchega, it will break
        cout<<str[i]<<" ";
        i++;
    }
    cout<<endl;
    
    //we can also print it as
    //cout<<str;
}