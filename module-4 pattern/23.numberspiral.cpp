#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    for(int i = 1; i<=2*n-1 ; i++){
        for(int j=1; j<=2*n-1; j++){
            int i2=i, j2=j;
            if(i>n) i2=2*n-i;
            if(j>n) j2=2*n-j;
            int x = min(i2,j2);
            cout<<n+1-x<<' ';
        }
        cout<<endl;
    }
}