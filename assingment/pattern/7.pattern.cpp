#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int ntr =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<ntr; k++){
            cout<<(char)('A'+k);
        }
        ntr+=2;
        cout<<endl;
    }
}