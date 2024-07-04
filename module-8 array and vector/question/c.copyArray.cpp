// write a program to copy the contents of one array into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }
    // coping vector
    vector<int> v2;
    for(int i=n-1; i>=0; i--){
        int x = v[i];
        v2.push_back(x);
    }
    // printing copy vector
    for(int i=0; i<=v2.size()-1; i++){
        cout<<v2.at(i)<<",";
    }
}