// input a string of length n and count all the vowels in the given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"enter your string: ";
    string str;
    getline(cin,str);

    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<"total "<<count<<" vowels are there";
}