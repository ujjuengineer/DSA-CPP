#include<iostream>
using namespace std;
int main(){
    int side_of_square ;
    cout<<"enter the number of side of square ";
    cin>>side_of_square;
    for(int i=1; i<=side_of_square; i++){
        for(int j=1; j<=side_of_square; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}