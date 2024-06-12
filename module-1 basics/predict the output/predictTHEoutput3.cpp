#include<iostream>
using namespace std;
int main(){
    int num1;
    int p = 5, q = 10;
    p += q -= p;
    /* yaha left to right nhi, right to left solve hoga because it actually means that p += (q=q-p) --> p += 5 --> p = p + 5;.... so we have finally q = 5 and 
    p = 10 */
    cout<<p<<" "<<q<<endl;
    return 0;
}