// for input = 4
// 1
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int x = 64;
    for(int i=1; i<=n+1; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                cout<<j<<" ";
            }
            else cout<<(char)(x+j)<<" ";
        }
        cout<<endl;
    }
}