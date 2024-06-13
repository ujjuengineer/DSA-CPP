#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    int reverse=0;
    int lastDigit;
    while(num>0){
        lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num /= 10;
    }
    cout<<"reverse of the given num = "<< reverse;
}