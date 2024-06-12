#include<iostream>
using namespace std;
int main(){
    cout<<"enter an integer ";
    int n;
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<< n;
}