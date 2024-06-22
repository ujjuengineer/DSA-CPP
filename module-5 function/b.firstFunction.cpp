#include<iostream>
using namespace std;
// yaha humne ek function bna liya loop ka and parenthesis me x daal diya hai so that we can give input with function 
void pattern(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    pattern(3); // call the function with input 3, now function k parenthesis me int x me 3 value dal jaaega and ussi k according answer milega
    pattern(4);
    pattern(5);
}