// pascal triangle
// each term of pascal triangle indicate iCj where i is the row number and j is the columb number.... note that i and j start with 0 not with 1. if we put n = 4; then it will start from 0,1,2,3,4 
// i j   0   1   2   3   4
// 0    0c0 
// 1    1c0 1c1
// 2    2c0 2c1 2c2
// 3    3c0 3c1 3c2 3c3
// 4    4c0 4c1 4c2 4c3 4c4
// this is a pascal triangle, each line have term = i; 

#include<iostream>
using namespace std;
int fact (int x){
    int fact = 1; 
    for(int i=1; i<=x; i++){
        fact *= i;
    }
    return fact; 
}
int combination(int n, int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    return nfact/(rfact*nrfact);
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i = 0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << combination(i,j) <<" ";
        }
        cout<<endl;
    }
}