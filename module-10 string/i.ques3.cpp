// input a string of even length and revere the first half of the string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s); // input must be of even length
    int len = s.size();
    
    // if string is of size 6, then index will be 0,1,2,3,4,5
    // so we have to reverse int 5/2 index only i.e., (n-1)/2
    int revIndex = (len-1)/2;
    reverse(s.begin()+0, s.begin()+revIndex+1);
    cout<<s;
}