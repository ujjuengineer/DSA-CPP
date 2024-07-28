#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter your string: ";
    getline(cin,s);
    int n = s.size();
    sort(s.begin(),s.end()); // this will sort my string according to ascii values
    // name -> aemn
    // Name -> Naem because capital alphabet ka ascii value kam hota hai
    cout<<s<<endl;
}