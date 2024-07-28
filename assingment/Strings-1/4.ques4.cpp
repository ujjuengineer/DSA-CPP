// input a string of even length and revrse the second half of the string
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter even length string: ";
    getline(cin, str);
    int n = str.size();
    // let n=6 --> n/2=3 --> index will be 0,1,2,3,4,5 ; we have to reverse from index n/2
    int x = n/2;
    reverse(str.begin()+x, str.end());
    cout<< str;
}