// for input = 4;
//     *
//    * *
//   *   *
//  *     *
//   *   *
//    * *
//     *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int nsp= n;
    int space = 1;
    for(int nline= 1; nline <= 2*n-1; nline++){
        for(int i=1; i<=nsp; i++){
            cout<<" ";
        }
        if(nline<n) nsp--;
        else nsp++;
        
        for(int nst=1; nst<=1; nst++){
            cout<<"*";
        }
        if(nline > 1 && nline < 2*n-1){
            for(int j=1; j<=space; j++){
                cout<<" ";
            }
            if(nline<n) space+=2;
            else space -=2;
            
            for(int k=1; k<=1; k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}