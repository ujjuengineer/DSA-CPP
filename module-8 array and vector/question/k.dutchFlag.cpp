// sort the array of 0's, 1's and 2's
// DUTCH FLAG MEATHOD
#include<iostream>
#include<vector>
using namespace std;
void printing_fun(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap_fun(vector<int>& v, int a, int b){
    int temp = v[a];
    v[a]=v[b];
    v[b]=temp; 
}
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    int n = arr.size();
    printing_fun(arr,n);

    int lo = 0, mid = 0, hi = n-1;
    while(mid<=hi){
        if(arr[mid]==2){
            swap_fun(arr,mid,hi);
            hi--;
        }
        if(arr[mid]==0){
            swap_fun(arr,lo,mid);
            lo++; mid++;
        }
        if(arr[mid]==1)mid++;
    }
    printing_fun(arr,n);
}