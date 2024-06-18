// number of rows means number of lines and num of columb means number of things in each line 

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
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}