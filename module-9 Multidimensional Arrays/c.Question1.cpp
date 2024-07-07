// write a program to store roll number and marks obtained by students side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number students: ";
    cin>>m; 
    int arr[m][2]; // roll num -> marks
    
    // taking input
    cout<<"enter the roll number and marks: "; 
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j]; 
        }
    }
cout<<endl;
    // printing output
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j+=2){
            cout<<arr[i][j]<<"->"<<arr[i][j+1];
        }
        cout<<endl;
    }
    cout<<endl;
    
}