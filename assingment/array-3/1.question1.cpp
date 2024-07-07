// count the number of triplets whose sum is equal to the given value x
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of ele in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter target number: ";
    cin>>target;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}