#include<iostream>
using namespace std;
int main(){
    int i;
    while(i=10){ // yaha i = 10 hai, so it is actually assing the value of i as 10, not comparing it.. hence it will go infinite times
        cout<<i<<endl;
        i += 1;
    }
}