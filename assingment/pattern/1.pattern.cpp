// for n = 4
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int col = n;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=col; j++){
            cout<<j<<" ";
        }
        col--;
        cout<<endl;
    }
}