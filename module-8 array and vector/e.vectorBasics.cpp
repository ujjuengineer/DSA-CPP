// vector is kind of array, but the difference is we need not to give the size here
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // declaration
    v.push_back(6); // first element ko 6 value mil gya
    v.push_back(1); // 2nd element ko 1 value mil gya
    v.push_back(9);
    v.push_back(0);
    cout<< v[0] <<' ';
    cout<< v[1] <<' ';
    cout<< v[2] <<' ';
    cout<< v[3] <<' ';
}