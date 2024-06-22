#include<iostream>
using namespace std;
// making function for calculating ncr;
int combination(int n, int r){
    int nfact = 1;
    for(int i=1; i<=n; i++){
        nfact *= i;
    }
    int rfact = 1;
    for(int i=1; i<=r; i++){
        rfact *= i;
    }
    int nrfact = 1;
    for(int i = 1; i<=n-r; i++){
        nrfact *= i;
    }
    return nfact/(rfact * nrfact);
}
int main(){
    int n, r;
    cout<<"enter n and r ";
    cin>>n>>r;
    cout<<combination(n,r);
}