#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,5,0,1,2,0,0,4,0,3,7,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

        for(int i=0; i<n; i++){
            bool flag = true;
            for(int j=0; j<n-1-i; j++){
                if(arr[j]==0){
                    swap(arr[j],arr[j+1]);
                    flag = false;
                }
            }
            if(flag==true)break;
        }

        for(int i=0; i<n;i++){
            cout<< arr[i]<<" ";
        }
}