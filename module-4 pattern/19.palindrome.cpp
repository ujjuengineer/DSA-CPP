#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int a=1;
        int b=i-1;
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a++;
        }
        if(i>=2){
            for(int k=1; k<=i-1; k++){
                cout<<b<<" ";
                b--;
            }
        }
        cout<<endl;
    }
}