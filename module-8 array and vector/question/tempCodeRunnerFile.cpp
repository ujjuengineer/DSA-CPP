#include<iostream>
#include<vector>
using namespace std;
void rotatefun(vector<int>& nums, int a, int b){
    for(int i=a,j=b; i<j; i++,j--){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }  
}
int main(){
    vector<int> nums;
    // nums.push_back(0);
    // nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    // nums.push_back(3);
    // nums.push_back(3);
    // nums.push_back(4);
    // nums.push_back(5);
    int n = nums.size();
    int l = n-1;
    int count2=1;
    // i-count+2 rotate krna hai
    // n-1(count-2)2nd time time rotate krna hai
    for(int i=0; i<n; i++){
        int j = i;
        int count = 1;
        while(nums[j]==nums[j+1]){
            count++;
            j++;
        }
        if(count>2){
            rotatefun(nums,i+2,l);
            l = l - (count-2);
            rotatefun(nums,i+2,l);
        }
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int i=0;
    // while(nums[i+1]>=nums[i]){
    //     count2++;
    //     i++;
    // }
    // cout<<endl<<count2;
    reverse(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}