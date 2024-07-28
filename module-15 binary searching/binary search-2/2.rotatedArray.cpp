//LeetCode-33/81
// search in rotated sorted array
#include<iostream>
using namespace std;
int main(){
    int nums[]={4,5,6,7,0,1,2};
    int target = 7;
    int n = sizeof(nums)/sizeof(nums[0]);

    if(n==1){
        if(nums[0]==target) cout<<"target is at index : "<< 0<< endl;
        else cout<< "target not found";
    }
    if(n==2){
        if(nums[0]==target) cout<<"target is at index : "<< 0 << endl;
        else if(nums[1]==target) cout<<"target is at index : "<< 1 << endl;
        else cout<< " target not found";
    }
    else {
        // finding pivot
        int lo = 0, hi = n-1;
        int pivot = -1;
        while(lo<=hi){
            int mid = (hi+lo)/2;
            if(mid==0)lo = mid + 1;
            else if(mid==n-1)hi = mid - 1;
            else if(nums[mid]<nums[mid+1] && nums[mid]< nums[mid-1]){
                pivot = mid; break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivot = mid+1; break;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[n-1])lo = mid + 1;
            else hi = mid - 1;
        }
        cout<< "pivot is : "<< pivot<< endl;

        // if pivot = -1
        if(pivot==-1){
            int lo = 0, hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target){
                    cout<<"target is at "<< mid;
                    break;
                }
                else if(nums[mid]>target) hi = mid - 1;
                else if(nums[mid]<target) lo = mid + 1;
            }
        }
        // if pivot is not -1
        else{
            if(target>=nums[0] && target <= nums[pivot-1]){
                int lo = 0, hi = pivot-1;
                while(lo<=hi){
                    int mid = lo + (hi-lo)/2;
                    if(nums[mid]==target){
                        cout<<"target is at: "<<mid;
                        break;
                    }
                    else if(nums[mid]>target) hi = mid - 1;
                    else lo = mid + 1;
                }
            }
            else if(target>=nums[pivot] && target <= nums[n-1]){
                int lo = pivot, hi =n-1;
                while(lo<=hi){
                    int mid = lo + (hi-lo)/2;
                    if(nums[mid]==target){
                        cout<<"target is at: "<<mid;
                        break;
                    }
                    else if(nums[mid]>target) hi = mid - 1;
                    else lo = mid + 1;
                }
            }
        }
    }
    
    
    
}