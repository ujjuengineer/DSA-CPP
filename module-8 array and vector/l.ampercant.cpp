// ampercant (&), used to pass the vector in function through reference, we simply use vector<int>& a;

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    a[0]=99;
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    // passing this vector in function
    change(v);
    // printing the vector after change
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<",";
    }
    cout<< endl;
}