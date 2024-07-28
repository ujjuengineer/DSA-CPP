// input a string and concatenate with its reverse string and print it
// input: pw ---> output: pwwp
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter the string: ";
    getline(cin, str);
    int n = str.size();
    
    // we will move through the strig and keep adding its element in reverse order
    for(int i=n-1; i>=0; i--){
        char ch = str[i];
        str = str+ch;
    }
    
    cout<< str;
}