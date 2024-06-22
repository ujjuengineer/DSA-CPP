#include<iostream>
using namespace std;
int hcf(int x, int y){
    // yaha humlog ulta divide krna start krenge and jese hi common factor milega we will stop
    int fac;
    for(int i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            fac = i;
            break;
        }
    }
    return fac;
}

int main(){
    int x,y;
    cout<<"enter first num: ";
    cin>>x;
    cout<<"enter second num: ";
    cin>>y;
    cout<<"hcf of given numbers is "<< hcf(x,y);
}