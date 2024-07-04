// shorting 1's and 0's of given array
#include<iostream>
#include<vector>
using namespace std;
void call(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
void swi(vector<int>& v, int a, int b){
    for(int i=a,j=b; i<j; i++,j--){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    }
}
void rearr(vector<int>& v, int n){
    int a = 0, b = n - 1;
    while(a<b){
        if(v[a]==0)a++;
        else if(v[b]==1)b--;
        else if(v[a]==1 && v[b]==0){
            // swi(v,a,b); we can simply do
            v[a]=0; v[b]=1;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int n = v.size();
    rearr(v,n);
    call(v,n);
}