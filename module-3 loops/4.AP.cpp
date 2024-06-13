#include <iostream>
using namespace std;
int main(){
    // m-1 : for (int i = a; i <= nth term of ap ; i += d)
    // nth term = a + (n-1)d
    int a, d, n;
    cout<<"enter first term : ";
    cin>>a;
    cout<<"enter common difference : ";
    cin>>d;
    cout<<"enter number of term : ";
    cin>>n;
    for(int i = a; i <= a + (n-1)*d ; i += d){
        cout<< i << " ";
    }
}