#include<iostream>
#include<vector>
using namespace std;
vector<int> suffle(vector<int>& num, int n){
    vector<int> vec(n);
    int a = 0;
    int b = n/2;
    // cout<< n << " "<<a<<' '<<b<<endl;
    for(int x = 0; x <= n-2; x += 2){
        vec[x]=num[a];
        vec[x+1]=num[b];
        //cout<<vec[x]<<" "<<vec[x+1]<<endl;
        a++; b++;
    }
    for(int i=0; i<n; i++){
        cout<<vec[i]<<",";
    }
    return vec;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    suffle(v,v.size());
    
}
