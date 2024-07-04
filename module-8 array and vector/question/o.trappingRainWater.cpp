#include<iostream>
#include<vector>
using namespace std;
void callfun(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<" ";
}
int main(){
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    int n = nums.size();

// find prev greater num
    vector<int> pregre(n);
    pregre[0]=-1;
    int preGre = -1;
    for(int i=1; i<n; i++){
        if(nums[i-1]>preGre){
            preGre=nums[i-1];
        }
        pregre[i]=preGre;
    }
    callfun(pregre,n);

// find next greater num
    vector<int> nexGre(n);
    int nexgre = -1;
    nexGre[n-1]=nexgre;
    for(int i = n-2; i>=0; i--){
        if(nums[i+1]>nexgre){
            nexgre=nums[i+1];
        }
        nexGre[i]=nexgre;
    }
    callfun(nexGre,n);

    // creating array consisting min of nexgre and pregre
    vector<int> minfunc(n);
    for(int i=0; i<n; i++){
        minfunc[i]=min(pregre[i],nexGre[i]);
    }
    callfun(minfunc,n);
    cout<<endl;
    // finding water stored
    // if element of nums[i] > minfunc[i] --> no water will store
    // else water stored = minfunc[i]-nums[i];
    int waterStored=0;
    for(int i=0; i<n; i++){
        if(nums[i]<minfunc[i]){
            waterStored += (minfunc[i]-nums[i]);
        }
    }
    cout<<"water stored = "<<waterStored;
}