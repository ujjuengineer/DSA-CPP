// Given a sorted array of n elements and a target "X". Find the first occurrence of 'x' in the array. If 'x' doesn't exist return -1
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int target;
    cout<<  "enter target: ";
    cin>> target;

    int lo = 0, hi = n-1;
    bool flag = 0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(mid>=1){
                /* agar mid = 0 hua then arr[mid-1] adress overflow ho jaaega, so we made a check mark */
                if(arr[mid-1]==target) hi = mid-1;
                else {
                    flag =  1;
                    cout<< "first occurrence of "<<target <<" is "<< mid;
                    break;
                }
            }
            else{
                flag =  1;
                cout<< "first occurrence of "<<target <<" is "<< mid;
                break;
            }
            
        }
        else if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == 0) cout<< "target doesn't exist";
}