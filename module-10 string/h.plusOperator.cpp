#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "ujj";
    cout<< s1<< endl;
    string s2 = "wal";
    
    // plus operator is used to add 2 strings
    s1 = s1 + s2;
    cout<< s1 << endl;

    // we can also do like
    s1 = s1 + " kumar";
    cout<< s1 << endl;

    // we can add infront also
    s1 = "my name is " + s1 ;
    cout<< s1 << endl;
}
