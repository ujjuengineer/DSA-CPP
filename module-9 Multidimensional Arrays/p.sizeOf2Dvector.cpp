#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(9);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(7);
    v2.push_back(2);
    v2.push_back(0);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(3);
    v3.push_back(2);
    v3.push_back(4);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int row = v.size();
    cout<<"number of row: "<<row<<endl;

    // now we can find col of each row, or we can say size of each vector 
    cout<<"col in 1st row: "<< v[0].size()<<endl; // col of 1st row
    cout<<"col in 2nd row: "<<v[1].size()<<endl; // col of 2nd row
    cout<<"col in 3rd row: "<<v[2].size()<<endl; // col of 3rd row

}