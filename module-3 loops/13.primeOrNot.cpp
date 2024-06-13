#include<iostream>
using namespace std;
int main(){
    cout<<"enter your number ";
    int n;
    int count = 1;
    cin>>n;
    for(int i=2 ; i<n; i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(count==1){
        cout<<"prime number";
    }
    else cout<<"composite number";
}