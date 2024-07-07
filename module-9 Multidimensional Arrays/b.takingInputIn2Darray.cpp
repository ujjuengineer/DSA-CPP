#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows: ";
    cin>>m; //2
    cout<<"enter the number of col: ";
    cin>>n; //3
    int arr[m][n];
    
    // taking input
    cout<<"enter the element: "; 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j]; // 1,2,3,4,5,6
        }
    }
cout<<endl;
    // printing output
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}