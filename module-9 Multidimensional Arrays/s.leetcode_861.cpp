// score after flipping matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
// 0 0 1 1
// 1 0 1 0 this is the matrix, we have to flip it such that its 
// 1 1 0 0 decimal conversion give us maximum possible number
// to do so, we must have 1 at the starting of the binary number, jitna jyda 1, left side hoga utna bada decimal number hoga

    // taking input in vector
    int n,m;
    cout<<"enter the row and col of vector: ";
    cin>>n>>m;
    vector<vector<int> > v(n,vector<int> (m)); // n row, m col
    cout<<"enter the element of the vector: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    cout<<endl;

    // row wise flipping
    for(int i=0; i<n; i++){
        if(v[i][0]==0){// agar 1st ele of every row 0 hai then flip krna hai, 1->0; 0->1;
            for(int j=0; j<m; j++){
                if(v[i][j]==0)
                    v[i][j]=1;
                else 
                    v[i][j]=0;
            }
        }
    }
    // col wise flipping
    
    for(int j=0; j<m ;j++){
        int count0=0, count1=0;
        for(int i=0; i<n; i++){// counting 0 & 1 in every col
            if(v[i][j]==0) count0++;
            else count1++;
        }
        if(count0>count1){ // if 0 is more in any col, flip that col
            for(int i=0; i<n; i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    // printing new vector
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // converting binary to decimal
    int sum = 0;
    for(int i=0; i<n; i++){
        int x = 1;
        for(int j=m-1; j>=0; j--){
            sum = sum + (x * v[i][j]);
            x *= 2;
        }
    }
    cout<<sum;
}