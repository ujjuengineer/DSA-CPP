#include<iostream>
#include<climits>
using namespace std;
void swi(int a, int b, int nums[]){
    int temp = nums[a];
    nums[a]=nums[b];
    nums[b]=temp;
}
int main(){
    int nums[]= {1,1,1,2,2,3,4,4,4,4};
    int n = 10;
        int count = 0, res = 0;
        int target = INT_MIN;
        int opposite = 0;
        for(int i=0; i<n-opposite; i++){
            if(nums[i]!=target){
                target = nums[i];
                count = 1;
                res++;
            }
            else{// means arr[i]= target
                if(count<2){
                    count++;
                    res++;
                }
                else{
                    int j = i;
                    while(j<n-1){
                        swi(j, j+1, nums);
                        j++;
                    }
                    opposite++;
                    i--;
                }
            }
            
        }
        
        for(int i=0; i<n; i++){
            cout<< nums[i] << ' ';
        }
        cout<<endl<<res;
}