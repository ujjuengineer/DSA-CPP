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
    v.push_back(-4);
    v.push_back(-9);
    v.push_back(7);
    v.push_back(-9);
    v.push_back(0);
    v.push_back(1);
    v.push_back(-3);
    int n = v.size();
    int a = 0, b = n-1;
    while(a<b){
        if(v[a]<0)a++;
        else if(v[b]>0)b--;
        else if(v[a]>=0 && v[b]<0){
            int temp = v[a];
            v[a]=v[b];
            v[b]=temp;
            a++; b--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}