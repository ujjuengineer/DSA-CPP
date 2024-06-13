// sum of all even digit of given number
// for example .. input = 232... output = 4
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter your num ";
cin>>n;
int sum = 0;
for(; n>0 ;){
    int lastdigit = n%10;
    if(lastdigit%2==0){
        sum = sum + lastdigit;
    }
    n /= 10;
}
cout<<"sum of even digit of given number = "<<sum;
}