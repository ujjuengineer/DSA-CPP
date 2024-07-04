#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
    }
}

void reversePart(int a, int b, vector<int>& v){
    int i= a;
    int j=b;
    while(i<j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

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
    int a,b;
    cout<<"enter the part you want to reverse: ";
    cin>>a>>b;
    reversePart(a,b,v);
    display(v);
}