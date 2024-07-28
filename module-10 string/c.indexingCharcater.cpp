// indexing of character in strings
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ujjwal kumar";
    // so here we have total 12 character including 1 space between ujjwal and kumar
    // but in actual string str have stored one extra character at end that is null character \0;

    // we can print this string just like array
    cout<< str[0]<<endl;
    cout<< str[11]<<endl;

    // we can use loop infact
    for(int i=0; str[i]!='\0' ; i++){
        cout<<str[i];
    }
}