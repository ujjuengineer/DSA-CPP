// we can calculate next term of every line using previous term of the line. if current term is iCj, then next term will be iC(j+1).. and so on
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i=0; i<=n; i++){
        int current = 1; //first term of every line is 1
        for(int j=0; j<=i; j++){
            cout<<current<<' ';
            // current is our iCj, now we have to calculate iC(j+1), so use formula 
            // nC(r+1) = ncr * (n-r)/(r+1)
            current = current * (i-j)/(j+1);
        }
        cout<<endl;
    }
}