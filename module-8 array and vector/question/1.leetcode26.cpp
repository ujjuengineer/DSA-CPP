#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& v,int a, int b){
    for(int i=a, j=b; i<j; i++, j--){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int filter(vector<int>& v){
    int n = v.size();
    int count = 0;
    int a = 1, b = n-1;
    while(a<b){
        if(v[a]==v[a-1]){
            reverse(v,a,b);
            count++;
            b--;
            reverse(v,a,b);
        }
        else a++;
    }
    return count;
}
void call(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(4);
    int n = v.size();
    cout<<filter(v)<<endl;
    call(v,n);
}