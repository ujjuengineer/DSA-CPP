/* Q.5. Write a function which accepts a 2D array of integers and its size as arguments and displays th elements of middle row and the elements of middle column.
[assuming the 2D array to be a square matrix with odd dimensions i.e., 3*3, 5*5]
*/
#include<iostream>
#include<vector>
using namespace std;
void callFun(vector<vector<int> >& v, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2){
                cout<<v[i][j]<<" ";
            }
            else cout<< " "<<" ";
        }
        cout<< endl;
    }
}
int main(){
    int n;
    cout<< "enter the size of the matrix; ";
    cin>> n;
    vector< vector<int> > arr(n, vector<int> (n));
    
    // taking input 
    cout<< "enter the elements of the matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }

    callFun(arr, n);
}