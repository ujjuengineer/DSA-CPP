// incomplete ????
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(0);
    nums.push_back(10);
    nums.push_back(14);

    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> copy;
    for(int i=0; i<n; i++){
        copy[i]=nums[i];
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
        int mini = nums[0];
        int maxi = nums[n-1];
        int res, diff1, diff2 ;
        if(n>3){
            int a = 0;
            while(a<=2){
                nums[a]=maxi;
                a++;
            }
            diff1 = maxi - nums[a];
            // cout<<diff1<<endl;

            int b = n-1;
            while(b>=n-3){
                nums[b]=mini;
                cout<<nums[b]<<endl;
                b--;
                
            }
            cout<<nums[n-4]<<" "<<mini<<endl;
            diff2 = nums[b]-mini;
            cout<<diff2<<endl;
        }
        // if(diff1 < diff2) cout<< diff1;
        // else cout<< diff2;
}