// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int nsp= 2*n-3;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int k=1; k<=1; k++){
            cout<<"*";
        }
        for(int l=1; l<=nsp; l++){
            cout<<" ";
        }
        nsp -= 2;
        if(i<n){
            for(int k=1; k<=1; k++){
            cout<<"*";
            }
        }
        cout<<endl;
    }
    
}