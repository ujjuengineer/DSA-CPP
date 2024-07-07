#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows of first matrix: ";
    cin>>m;
    cout<<"enter number of col of first matrix: ";
    cin>>n;
    int matrix1[m][n];

    int p,q;
    cout<<"enter number of rows of 2nd matrix: ";
    cin>>p;
    cout<<"enter number of col of 2nd matrix: ";
    cin>>q;
    int matrix2[p][q];

    int res[m][q]; // res matrix m*q ka hoga
    if(n!=p) cout<<"matrix can't be multiplied";
    else{
        // taking input in matrix 1 
        cout<<"enter element of first matrix: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>> matrix1[i][j];
            }
        }
        // taking input in matrix 2 
        cout<<"enter element of second matrix: ";
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>> matrix2[i][j];
            }
        }
    cout<<"\n";
        // multiplying matrix
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<p; k++){// yaha k<p v kr skte the
                    res[i][j] += (matrix1[i][k] * matrix2[k][j]);
                }
            }
        }
        // printing multiplication
        cout<<"multiplication of the matrix is "<<"\n"; 
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}