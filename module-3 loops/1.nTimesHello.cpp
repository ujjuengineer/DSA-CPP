#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter times of repetation ";
    cin>>n;
    for(int i = 1; i <= n ; i++ ){
        cout<<"hello loop" << endl;
    }
    // int i ko humne loop k andar declare kra hai hence agar loop k bahar hum i ko use kre to error de dega... to get rigd of that we can declare i outside of the loop
}