#include<iostream>
#include<vector>
using namespace std;
void change2Dvector(vector<vector<int> >& v){
    v[0][0]=70;
    // we can also find number of rows/length of this vector here
    cout<<"length of this vec is "<<v.size()<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);

    
    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][0]<<endl;
    change2Dvector(v);
    cout<<v[0][0]<<endl;
}