#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str = "my name is ujjwal kumar";
    stringstream ss(str);// str ko stringstream operator me le lo
    string temp; // ek temp string bnaya jisme hum ss se string nikal ke temp me store krenge
    while(ss>>temp){// ss se input le liya temp me
        cout<<temp<<endl; // temp ko print krwa diya
    }
cout<<endl;

    string s = "i am an engineer";
    stringstream x(s);
    string tempo;
    while(x>>tempo){
        cout<<tempo<<" ";
    }
}