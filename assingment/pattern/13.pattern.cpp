// input = 5;
//     1
//    2 2
//   3   3
//  4     4
// 5       5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int nsp = n-1;
    int num = 1;
    int num2 = 2;
    int space = -1;
    for(int nline =1; nline <= n; nline++){
        for(int i=1; i<=nsp; i++){
            cout<<" ";
        }
        nsp--;
        for(int j = 1; j<=1; j++){
            cout<<num;
        }
        num++;
        for(int k = 1; k<=space; k++){
            cout<<" ";
        }
        space+=2;
        if(nline>1){
            for(int l=1; l<=1; l++){
                cout<<num2;
            }
            num2++;
        }
        cout<<endl;
    }
}