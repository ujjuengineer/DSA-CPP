// rotate the given array 'a' by k steps, where k is non-negative
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<",";
    }
}
void reverse(int a, int b, vector<int>&v){
    for(int i=a, j=b; i<j; i++,j--){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    int k;
    cout<<"enter the number of element you want to rotate: ";
    cin>>k;
    if(k>v.size()) k=k%v.size();
    reverse(0,v.size()-k-1,v);
    reverse(v.size()-k, v.size()-1, v);
    reverse(v.begin(),v.end());
    display(v);
}