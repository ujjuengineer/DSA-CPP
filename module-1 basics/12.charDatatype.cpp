// each character has an ascii values associated with it, let see how we can get it

#include <iostream>
using namespace std;
int main (){
    
    char ch = 'a'; // char ko single comos ke andar put krte hai
    cout<<(int)ch << endl; // this is called typecasting

    // we can also do opposite
    int x = 65;
    cout<<(char)x << endl;
    // this is called typecasting23456789     

    // char are generally are of single letter like 'a' 'b' 'c' except '\0'
    char character = '\0';
    cout<<(int)character;

    // note: ascii value of a = 97; and A = 65; and 0 = 48;
}