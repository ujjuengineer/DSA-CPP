#include<iostream>
using namespace std;
int main(){
    int num_rows, num_col;
    cout<<"enter num of rows ";
    cin>>num_rows;
    cout<<"enter num of columbs ";
    cin>>num_col;
    for(int i=1; i<=num_rows; i++){
        for(int j=1; j<=num_col; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}