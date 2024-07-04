//M-1: we will simply count the number of 0,1 and 2
// sort the array of 0's, 1's and 2's
#include<iostream>
#include<vector>
using namespace std;
int main(){
     
    int arr[]={2,0,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    // counting number of 0,1 and 2
    int num0 = 0, num1 = 0, num2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0)num0++;
        else if(arr[i]==1)num1++;
        else num2++;
    }
    cout<<num0<<" "<<num1<<" "<<num2<<"\n\n";

    // filling 0,1 and 2 again in the array
    for(int i=0; i<n; i++){
        if(i<num0)arr[i]=0;
        else if(i<num0+num1)arr[i]=1;
        else arr[i]=2;
    }
    // printing array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}