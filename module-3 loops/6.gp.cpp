#include <iostream>
using namespace std;
int main(){ // gp: 1,2,4,8,16,32...
    int n;
    int a = 1;
    cout<<"enter num of terms ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        cout<<a<<" ";
        a *= 2; 
    }
}