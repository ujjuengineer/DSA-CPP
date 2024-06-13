// hum jese hi continue statement ka use krte hai wese hi loop restart ho jata hai and aage likha statement nhi padhta
// lets print odd numbers using continue
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=100 ; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
}