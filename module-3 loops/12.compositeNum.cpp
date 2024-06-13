#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number ";
    cin>>n;
    for(int i = 2; i<n ; i++){
        if(n%i==0){
            cout<<"composite number";
            break;
        }
    }
}