// Given an array, arr[] containing 'n' integers, the task is to find an integer(say k) such that after replacing each and every index of the array by |ai-k| where (i belongs[1,n]), results in a sorted array. if no such integer exists that satisfies the above condition then return -1;
#include<iostream>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a>=b) return b;
    else return a;
}
int main(){
    int arr[]={5,3,10,3};
    int n = 4;
    int k;
    float kmin = float(INT_MIN);
    float kmax = float(INT_MAX); 
    bool flag = true;
    // we have to find intersection of all the possible range of k so we need max of all possible kmin, and min of all possible kmax
    for(int i=0; i<n-1; i++){
        if((arr[i]<=arr[i+1])){
            kmax = min(kmax, (arr[i]+arr[i+1])/2.0);
        }
        else if(arr[i]>arr[i+1]){
            kmin = max(kmin, (arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false; break;
        }
    }
    // now we have kmin is integer then we have to proceed differently and if it is decimal number then we have to approach differently, for kmax, it doesn't matter, we just have to return int(kmax) for upper limit of the range
    if(flag==false) cout<<"no possible value of k";
    else{
        // 2 case possible, either kmin == kmax or kmin < kmax
        if(kmin==kmax){
            // 2 case possible, kmin is integer or float, if it is integer, means only one possible value of k else no possible value of k
            if(kmin-int(kmin)==0) // this will check if it is integer or not
                cout<<"only one possible value of k that is"<< kmin;
            else 
                cout<< "no possible value of k ";
        }
        else{// kmax is not equal to kmin
            kmin = int(kmin)+1; kmax = int(kmax);
            cout<<"range of k is: ["<<kmin<<","<<kmax<<"]";
        }
    }
}