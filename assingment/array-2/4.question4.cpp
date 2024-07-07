// find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // finding sum of every element
    int Allsum = 0;
    for(int i=0; i<n; i++){
        Allsum += arr[i];
    }

    // finding sum of odd indices
    int oddSum = 0;
    for(int i=1; i<n; i+=2){
        oddSum += arr[i];
    }
    
    int reqAns = Allsum-oddSum;
    cout<<reqAns;
}