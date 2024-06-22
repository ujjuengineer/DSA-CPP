#include<iostream>
using namespace std;
// creating function to calculate factorial
int fact(int x){
    int factorial = 1;
    for(int i=1; i<=x; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    int nfact = fact(n); // here we stored factorial of n in nfact 
    int rfact = fact(r);
    int nrfact = fact(n-r);
    cout<< nfact/(rfact * nrfact);
    // we can directly make a function for calculating ncr;
}