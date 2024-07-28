#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,4};
    int target = 3;
    int n = sizeof(nums)/sizeof(nums[0]);


    int lo = 0, hi = n-1;
            bool flag = false;
            while(lo<=hi){
                int mid = (hi+lo)/2;
                cout<< mid<<" ";
                if(nums[mid]==target){
                    cout<<"target is at "<< mid;
                    flag = true;
                }
                if(flag==true) break;
                else if(nums[mid]>target) hi = mid - 1;
                else lo = mid + 1;
            }
            if(flag==false)cout<<"target not found"<<endl;
}