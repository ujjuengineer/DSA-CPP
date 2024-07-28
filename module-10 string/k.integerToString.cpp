#include<iostream>
#include<string>
using namespace std;
int main(){
    // we cannot directly typecaste inter to string or viceversa
    // to do so, we have an inbuilt function
    int x = 12345;
    string s = to_string(x);
    cout<<s+" : this is a string";
}