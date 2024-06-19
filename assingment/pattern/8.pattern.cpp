// FOR INPUT = 4;
//    A 
//   BAB 
//  CBABC
// DCBABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int nsp = 1; nsp<=n-i ; nsp++){
            cout<<" ";
        }
        int x = 64;
        for(int j=1; j<=i; j++){
            cout<<(char)(x+i);
            x--;
        }
        int y = 65;
        for(int k=1; k<i; k++){
            cout<<(char)(y+k);
        }
        cout<<endl;
    }
}