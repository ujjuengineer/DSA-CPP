#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    int n = nums.size();
        vector<int> result(n);
        int i,j;
        int pro;
        for(i=0; i<n; i++){
            pro = 1;
            for(j=0; j<n; j++){
                int x = nums[j];
                if(j!=i) pro *= x;
            }
            result[i]=pro;
        }
    for(int i=0; i<n ; i++){
        cout<<result[i]<<" ";
    }
}