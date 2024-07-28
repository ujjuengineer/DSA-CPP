// stoi-> string to integer, stoll-> string to long long
#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std; 
int main(){
    // string to intger
    string s = "123";
    int x = stoi(s);
    cout<< x+1 << endl;

    // integer to string
    s = to_string(x);
    cout<< s << endl;

    // string to long long
    string str = "123456789234"; // this can't be store in int as it is too long, so we store this in int type
    long long y = stoll(str);
    cout<< y + 1 << endl;
}