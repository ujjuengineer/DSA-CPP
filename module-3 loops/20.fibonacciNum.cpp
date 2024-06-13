#include<iostream>
using namespace std;
int main(){
    int a = 1, b = 1;
    int n;
    cin>>n;
    int nthfibonacci;
    if(n==1)cout<<"1st fibonacci num is 1";
    else if(n==2)cout<<"2nd fibonacci num is 1";
    else{
        for(int i =3; i<=n; i++){
            nthfibonacci = a + b;
            a = b;
            b = nthfibonacci;
        }
        cout<<n<<"th fibonacci number is "<<nthfibonacci;
    }
}