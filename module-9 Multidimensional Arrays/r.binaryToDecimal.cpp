#include<iostream>
#include<vector>
using namespace std;
int main(){
    // let we have a binary 0011, how we will convert this in decimal
    // step1: store this number in array
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    int n = v.size();
    int sum = 0;
    int temp = 1;
    for(int i=n-1; i>=0; i--){
        sum = sum + temp*v[i];
        temp *= 2;
    }
    cout<<sum;// sum will give our transformed decimal 
}