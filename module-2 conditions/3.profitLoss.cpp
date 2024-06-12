#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"enter cost prise ";
    cin>>cp;
    cout<<"enter selling prise ";
    cin>>sp;
    if(cp==sp){
        cout<<"no profit no loss";
    }
    else if(cp>sp){
        cout<<"loss = "<<cp-sp;
    }
    else {
        cout<<"profit = "<<sp-cp;
    }

    
}