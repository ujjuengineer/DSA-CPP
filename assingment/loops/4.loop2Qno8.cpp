// print first n fibonacci num
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f1= 1, f2 = 1;
    int sum = 0;
    if(n>=1) cout<<"1st fibonacci num is 1"<<endl;
    if(n>=2) cout<<"2nd fibonacci num is 1"<<endl;
    if(n>=3) {
        for(int i = 3; i <=n ; i++){
            sum = f1 + f2;
            cout<<i<<"th fibonacci number is "<<sum<<endl;
            f1 = f2;
            f2 = sum;

        }
    }
}