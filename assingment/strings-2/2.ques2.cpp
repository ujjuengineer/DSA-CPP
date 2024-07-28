// find the second largest digit in the string consisting of digits from 0 to 9
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< "enter string of length less than 10: ";
    getline(cin, str);
    int n = str.size();

    // pehle largest search krenge and then second largest

    // finding largest
    int max = -1;
    for(int i=0; i<n; i++){
        int x = int(str[i]);
        if(x>max) max = x;
    }
    cout<<"max among them is: "<< max-48<<endl; // we did -48 as ascii of 0=48;
    
    // finding second largest
    int secmax = -1;
    for(int i=0; i<n; i++){
        int x = int(str[i]);
        if(x>secmax && x!=max) secmax = x;
    }
    if(secmax==-1)cout<<"no second max number is present";
    else cout<<"second max is: "<< secmax-48;
}