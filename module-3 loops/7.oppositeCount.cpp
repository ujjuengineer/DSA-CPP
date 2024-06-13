#include <iostream>
using namespace std;
int main(){ // if n = 10 --> print 10, 9, 8, 7, ...1;
    int n;
    cout<<"enter num  ";
    cin>>n;
    for(int i = n ; i>=1; i--){
        cout<<i<<endl;
    }
}