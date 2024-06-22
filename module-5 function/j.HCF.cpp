// we should notice hcf(x,y)<= min(x,y), hcf of (10,50) is 10, similarly hcf of (24,60) is 12 which is less than min of (24,60)
#include <iostream>
using namespace std;

int hcf(int x, int y){
    int fac;
    for(int i=1; i<=min(x,y); i++){// loop min of x,y tak chlega
        if(x%i==0 && y%i==0){// we are finding the factors of x,y 
            fac = i; // here we are storing the common factors of x,y
        }
    }
    return fac;
}

int main(){
    int a,b;
    cout<<"enter first num: ";
    cin>>a;
    cout<<"enter second num: ";
    cin>>b;
    int fac = hcf(a,b);
    cout<<"heighest common factor of "<<a <<" and "<<b<< " is "<<fac;
}