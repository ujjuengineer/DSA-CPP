// meathod 2 counting, where we count number of zero and one and then push it in vec
#include<iostream>
#include<vector>
using namespace std;
void call(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    int n = v.size();
    int count0 = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0)count0++;
    }
    cout<<count0<<endl;
    call(v,n);
    for(int i=0; i<n; i++){
        if(i<count0) v[i]=0;
        else v[i]=1;
    }
    call(v,n);
}