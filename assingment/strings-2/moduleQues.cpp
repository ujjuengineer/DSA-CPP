// given a strings consisting of lowercase englidh alphabets. print the cahracters that is occuring most number of times
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s = "aabbbbccccd";
    int n = s.size();

    sort(s.begin(), s.end());
    int a = 0;
    int count = 1;
    int maxCount = 0;
    char ch;
    while(a<n-1){ // aabbbbcd
        if(s[a]==s[a+1]) count++;
        else{
            if(maxCount<count){
                maxCount=count;
                ch = s[a];
            }
            count=1;
        }
        a++;
    }
    cout<<"max count is: "<< ch<<" "<< maxCount;
}