#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// algo: we will select a particular element and find the minimum of them, then swap the minimum with first element, similarly this will go on untill our array is sorted
int main(){
    int arr[]={5,3,-2,2,1,4,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){ // n-1 times selection hoga
        int mini = INT_MAX;
        int mindx = -1;
        for(int j=i; j<n; j++){// calculating min element
            if(arr[j]<mini){
                mini = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]); // swapping minimum from first element
    }
    for(int ele : arr){
        cout<< ele<<" ";
    }
    
}