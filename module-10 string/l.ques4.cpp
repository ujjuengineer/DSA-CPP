// return the total number of digits in a number without using any loop
#include<iostream>
#include<string>
using namespace std;
int main(){
    long x = 6200746561; // my number ;)
    // we can convert this in string and then simply use builtin function to find size
    string s = to_string(x);
    cout<<"number of digits are: "<<s.size();
}