#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    int digit=0;
    while(num>0){
        num = num/10;
        digit++;
    }
    cout<<"number of digit = "<< digit;
}