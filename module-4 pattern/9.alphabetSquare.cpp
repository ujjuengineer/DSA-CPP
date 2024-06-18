#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ascii = 64 + n;
    for(int i = 1; i<=n ; i++){
        for(int j = 65; j<=ascii; j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }

}