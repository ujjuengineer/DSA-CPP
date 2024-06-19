// 1234567  for input = 4;
// 123 321
// 12   21
// 1     1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    int ntr = n-1;
    int nsp = 1;
    for(int i=1; i<n; i++){
        for(int j=1; j<=ntr; j++){
            cout<<j;
        }
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp += 2;
        int x = n-i;
        for(int l=1; l<=ntr; l++){
            cout<<x;
            x--;
        }
        ntr--;
        cout<<endl;
    }
}