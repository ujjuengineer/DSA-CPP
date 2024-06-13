#include <iostream>
using namespace std;
int main(){
    cout<<"enter number ";
    int n;
    cin>>n;
    int factorial=1;
    for(int i = n; i>0; i--){
        factorial=factorial*i;
    }
    cout<<"factorial of "<<n<<" = "<<factorial;
}