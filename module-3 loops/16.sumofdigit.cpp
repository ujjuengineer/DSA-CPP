#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    int sum=0;
    int lastDigit;
    while(num>0){
        lastDigit = num%10;
        sum = sum + lastDigit;
        num /= 10;
    }
    cout<<"sum of digit = "<< sum;
}