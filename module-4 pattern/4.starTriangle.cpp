#include<iostream>
using namespace std;
int main(){
    int base_of_triangle ;
    cout<<"enter the triangle length ";
    cin>>base_of_triangle;
    for(int i=1; i<=base_of_triangle; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}