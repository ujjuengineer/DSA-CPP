#include<iostream>
using namespace std;
int main(){
    float num ;
    cin>>num;
    int gif = (int)num; // we stored integer part of the float
    
    if(num<0){
        gif = gif-1;
    }
    float fractional_part = num - gif ;
    cout<<"fractioinal part of "<< num << " is " << fractional_part;

}