// In prev ques if it is given that there is only positive number then we can use another beautiful approach to save our space
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    // let the following array
    int arr[]={19,12,23,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);

    // algo: since we have positive number only, so we rather replacing them with 0,1,2 we can replace them with 0,-1,-2 and this -ve sign act as a check point for finding mini and finally we will replace the element by multplying with -1
    int count = 0;
    for(int i=0; i<n; i++){
        int mini = INT_MAX;
        int mindex = -1;
        for(int j=0; j<n; j++){
            if(arr[j]<mini && arr[j]>0){
                mini = arr[j];
                mindex = j;
            }
        }
        // cout<<mini<<endl;
        arr[mindex]=count;
        count--;
    }

    for(int ele: arr){
        ele = -ele;
        cout<<ele <<' ';
    }
}