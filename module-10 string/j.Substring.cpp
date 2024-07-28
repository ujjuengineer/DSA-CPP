#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "012345678";
    cout<< s.substr(4); // it will print all the character from 4th index to onward;
    cout<< endl;

    // we can use s.substr(idx,length) to get any part of the string
    cout<< s.substr(2,3); // it will print 3 element from index 2 and onward
cout<<endl<<endl;


    // Question: input a string of even length and return the second half of that string using inbuilt substr
    string str = "ujjwal"; // 6 char, idx = 0,1,2,3,4,5
    int len = str.size();
    cout<< str.substr(len/2);
}