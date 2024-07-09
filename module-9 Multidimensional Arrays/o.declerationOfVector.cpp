#include<iostream>
#include<vector>
using namespace std;
int main(){
// 1-d vectors: vector<int> v(3,2), 3 size with each have value 2
// 2D vector: 
    vector< vector<int> > v(3,vector<int> (4));
    // v naame ka 2D vector ban gya jisme 3 vectors store kr skte hai and un tino vectors ka size 4 hoga
    // so basically it created a matrix of row: 3 & col: 4; and each cell have default value = 0;
    cout<<v[0][0]<<endl;

    vector<vector<int> > v1(3,vector<int>(5,1));
    // it created a 2d vector, having 3 rows, 5 col, and each cell have value 1 as default
    // {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}}

    // we can print the 2D vectors just like 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

    // finding number of row
    cout<<"number of rows: " <<v.size()<<endl;

    // findig number of col
    cout<<"number of col : "<< v[0].size() <<endl;
    // this actually print the size of first vector, stored in first row

    
}