// Given an array if marks of students, if the markd of any student is less than 35 print its roll number. [rill number here refers to the index of the array.]
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the number of students: ";
    cin>>n;
    int marks[n];
    cout<<" enter marks of students : "; 
    // input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    //output
    cout<<"roll number having marks less than 35 are : ";
    for(int i=0; i<=n-1; i++){
        if (marks[i]<35){
            cout<< i <<' ';
        }
    }
}