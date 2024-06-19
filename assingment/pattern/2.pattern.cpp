// FOR INPUT = 4
// A 
// A B 
// A B C 
// A B C D

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int x = 64;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(x+j)<<" ";
        }
        cout<<endl;
    }
}