// find the doublet in the array whose sum is equal to the given value x;
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
    int target;
    cout<<"enter the target: ";
    cin>>target;
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            if(v[i]+v[j]==target){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
}