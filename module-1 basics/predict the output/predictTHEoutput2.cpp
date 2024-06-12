#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r); // left to right chlenge
    // p == q ---> true (1)
    // (p==q)(iska value 1 hai) == r (iska v value 1 hai) --> hence this will give true
    return 0;
}