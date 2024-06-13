#include <iostream>
using namespace std;
int main(){
    int t =10;
    while(t /=2){// here we are using t=t/2.. this is not condition, but this loop will work until while loop me likha hua 0 na ho jaae... while loop k andar ka jese hi 0 hota hai wese hi usse false maan liya jaata hai and loop ends
        cout<<"hello"<<endl;
    }
}


// hello
// hello
// hello
