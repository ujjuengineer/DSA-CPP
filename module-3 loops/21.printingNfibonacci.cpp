#include <iostream>
using namespace std;
int main(){
    int a =1, b = 1;
    int n;
    cin>>n;
    int sum;
    if(n>=1){cout<<a<<" ";}
    if(n>=2){cout<<b<<" ";}
    for(int i =3; i <= n; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
}