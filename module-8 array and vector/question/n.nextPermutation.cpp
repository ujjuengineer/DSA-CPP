// find next permutation, if not possible then short the array
// leetcode question
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(9);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(6);
    nums.push_back(5);
    nums.push_back(3);
    int n = nums.size();
    // step finding pivot index where change is happening
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1) reverse(nums.begin(), nums.end());
    else{

        //reversing right side of idx
        reverse(nums.begin()+idx+1, nums.end());

        // finding element just greater than nums[idx]
        int grtidx;
        for(int i=idx+1; i<n; i++){
            if(nums[i]>nums[idx]){
                grtidx = i; // yaha apne aap 5 ka idx update hoJaega
                break;
            }
        }
        // swapping idx and grtidx
        int temp = nums[idx];
        nums[idx]=nums[grtidx];
        nums[grtidx]=temp;
    }
    // printing next permutation
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}