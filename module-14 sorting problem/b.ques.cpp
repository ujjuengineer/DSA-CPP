// given an array with N distinct elements, convert the given array to a form where all element are in the range from 0 to n-1. the order of elements is the same , i.e., 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, ... N-1 is placed for the largest element.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    // let the following array
    int arr[]={19,12,23,8,-2,-8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    // we have to replace -8-->0 , -2-->1, 8-->2, 12-->3, 16-->4, 19-->5, 23-->6 in the same order ie., 
    // {5, 3, 6, 2, 1, 0, 4}
    // best meathod is that we create a checked vector. find minimum element, as soon we get the minimum element we replace it with "count" and make a check point in our checked vector, so that we didn't consider it again while finding next minimum

    // creating check vec
    vector<int> check(n,0); // n size ka vector bna liya having initial value 0

    int count = 0;
    for(int j=0; j<n; j++){
        int mini = INT_MAX;
        int mindex = -1;
        // finding min element 
        for(int i=0; i<n; i++){
            if(arr[i]<mini && check[i]==0){
                mini = arr[i];
                mindex = i;
            }
        }
        arr[mindex] = count;
        check[mindex] = 1; // marked that index as visited
        count++;
    }
    for(int ele: arr){
        cout<<ele<<" ";
    }
    
}
// we can save the space if it is given that only positive numbers are there in vector