// why this is not working ??
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            i = -1*i;
        }
        sum = sum + i;
    }
    cout<<sum;
}