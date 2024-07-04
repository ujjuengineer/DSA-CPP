// leetcode - 88

#include<iostream>
#include<vector>
using namespace std; 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        // we will create 3 pointer placed at end of the nums1, end of the nums2 and at m-1th element of nums1
        int s = nums1.size();
        int x = m+n-1; // pointed at last of nums1
        int y; // pointed at just before zeros in nums1
        if(m==0) y = m;
        else y = m-1;
        int z = n-1; // pointed at last of nums2
        while(x>=y){
            if(nums1[y]>nums2[z]){
                nums1[x]=nums1[y];
                x--;
                y--;
            }
            else if(nums1[y]<nums2[z]){
                nums1[x]=nums2[z];
                x--;
                z--;
            }
            else{
                nums1[x]=nums2[z];
                x--;
                z--;
            }
        }
        
    }
int main(){
    vector<int> nums1;
    // nums1.push_back(1);
    // nums1.push_back(2);
    nums1.push_back(0);
    // nums1.push_back(0);
    // nums1.push_back(0);
    // nums1.push_back(0);

    vector<int> nums2;
    nums2.push_back(1);
    // nums2.push_back(5);
    // nums2.push_back(6);

    int m = 0;
    int n = 1;

    merge(nums1,m,nums2,n);

    for(int i =0; i<nums1.size(); i++){
        cout<<nums1[i]<<" ";
    } 
}