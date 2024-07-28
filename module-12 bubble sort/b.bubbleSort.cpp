#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,5,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
// algo: we will pass through vector and check if next element is smaller than current element or not, if it is then swap, doing this through out the array will put my greatest element at last. we will do the same untill my array is sorted, to do so we have to pass through the array n-1 times, so we create a outer loop which will run n-1 times. after every paas, we will decrease the ittration of the loop by 1.


    
    for(int i=0; i<n-1; i++){ // n-1 passes
        
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){// swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // time complexity: O(n2)
    // printing
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// we can optimise our code further