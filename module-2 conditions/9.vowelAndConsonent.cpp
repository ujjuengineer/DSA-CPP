#include<iostream>
using namespace std;
int main(){
    cout<<"enter the character ";
    char ch;
    cin>>ch;
    int ascii = (int)ch;
    if(ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<ch<<" is a vowel";
        }
        else cout<<ch<<" is a consonent";
    }
    else cout<<"not an alphabet";
}