// write a program to reverse the array without using any extra array
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
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
    // solving using for loop
    for(int i=0, j=n-1; i<j; i++, j--){//ek saath 2 variable initialise kr skte h
        int temp = v[i];
        v[i]= v[j];
        v[j]=temp;
    }
    // we could have solve this shit with a simple builtin function
    // reverse(v.begin(),v.end());
    display(v);
}