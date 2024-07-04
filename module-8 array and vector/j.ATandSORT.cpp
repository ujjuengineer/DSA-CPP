#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(34);
    v.push_back(4);
    v.push_back(32);
    v.push_back(23);
    v.push_back(2);
    v.push_back(7);
    v.push_back(8);
    v.push_back(4);
    v.push_back(56);
    v.push_back(54);
    v.push_back(22);
    v.push_back(24);
    // we can also print the vector using v.at(i);
    for(int i=0; i<v.size(); i++){
        cout<< v.at(i)<<",";
    }
    cout<<endl;

    // using sort we can arrange out element in assending order
    sort(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<",";
    }
    
}