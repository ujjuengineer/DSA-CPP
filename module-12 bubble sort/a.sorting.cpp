#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    // taking input in vector
    cout<<"enter the element of the array";
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    // inbuilt sorting function
    sort(v.begin(), v.end()); // this will sort in assending order
    reverse(v.begin(), v.end()); // this will turn it in desending order

    // priting sorted array
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    
}