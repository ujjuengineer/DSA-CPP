// wap to print sum of a given number and its reverse
// sample input : 12
// sample output : 33 (12 + 21)

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter your num ";
cin>>n;
int reverse = 0;
for(int i = n; i>0 ;){
    int digit = i%10;
    reverse = reverse*10 + digit;
    i = i/10;
}
cout<<"sum of number and its reverse is = "<<n+reverse;
}