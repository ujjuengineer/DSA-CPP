#include<iostream>
using namespace std;
int main(){
    int ascii = 65;
    while(ascii<=90){
        char ch = (char)ascii;
        cout<<ch<<"-"<<ascii<<endl;
        ascii++;
    }
}