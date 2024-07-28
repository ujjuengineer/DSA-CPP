#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,6,9,8,5,7};
    // we can print this using foreach loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // we can even use this in vector
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(8);
    v.push_back(5);
    v.push_back(7);
    for(int x : v){
        cout<< x <<" ";
    }
    // ignore any warning
}