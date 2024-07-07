// WAP to find the smallest positive element in the sorted array that contains only positive elements
// Input:  arr[] = {2, 3, 7, 6, 8, -1, -10, 15}
// Output: 1
// Input:  arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 }
// Output: 4
// Input: arr[] = {1, 1, 0, -1, -2}
// Output: 2

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,6,7,8}; // let assume this is our array
    int n = sizeof(arr)/sizeof(arr[0]);
    // agar element missing nhi hai then their difference must be 1, e.g., 2-1<=1, 3-2<=1, 3-3<=1 6-3!<=1, so missing element 3 and five k bich me hai and smallest missing element 3+1 hoga
    
    bool flag = false;
    int smallEle = arr[0];
    for(int i=0; i<n-1; i++){
         if(arr[i+1]-arr[i]<=1){
            flag = false;
         }
         else{
            flag = true;
            smallEle = arr[i]+1;
            break;
         }
    }
    if(flag==true) cout<<"smallest missing element is "<<smallEle;
    else cout<<"no missing element";
}