#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    cout<<"enter first string: ";
    cin>>s;
    cout<<"enter second string: ";
    cin>>t;
    sort(s.begin(),s.end()); 
    sort(t.begin(),t.end());
    
    bool flag;
    if(s==t) flag = true;
    else flag = false;

    cout<<flag<<endl; 
}