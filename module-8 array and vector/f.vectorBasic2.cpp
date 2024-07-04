#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // declaration
    // if we want to initialise the vector using v[0]=9; it will show error because we have not mentioned the size of the vector till yet
    // so it always prefered to initilise the value using push_back
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    v.push_back(3); 
    // after this we can update or print the vector with v[0,1..];
    for(int i=0; i<=4; i++){
        cout<< v[i]<<" ";
    }
    cout<< endl;

    v[0]=9; // updating first element
    v[3]=0;
    for(int i=0; i<=4; i++){ // printing updated value
        cout<< v[i]<<" ";
    }
}