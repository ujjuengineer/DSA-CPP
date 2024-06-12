#include<iostream>
using namespace std;
int main(){
    // we know divident = divisor * quotient + remainder,
    // so remainder = divident - {divisor * quotient}
    int divident, divisor, quotient, remainder;
    cout<< "enter divident : ";
    cin>> divident;
    cout<< "enter divisor : ";
    cin>> divisor;
    quotient = divident / divisor;
    remainder = divident - (divisor * quotient);
    cout<< "your remainder = "<< remainder << endl;

    // we can perform the above task by using a modulus operator %
    int a = 5;
    int b = 2;
    cout<< a%b; // it will directly print my remainder

    
    return 0;
}