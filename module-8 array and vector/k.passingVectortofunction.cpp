#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
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
    // if you notice there is no change in vector v after running void function, it means vector is passed by value not by reference
    // each time you pass, new vector is created
}