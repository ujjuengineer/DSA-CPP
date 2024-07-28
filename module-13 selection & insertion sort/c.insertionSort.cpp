#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// algo: we will start with 2nd element and swap this element with its previous untill it is less than its previous element, then we go to 3rd element and then 4th and so on

int main(){
    int arr[]={-4,1,9,3,7,2,6,4,-5,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1; i<n; i++){
        int ptr = i;
        while(arr[ptr]<arr[ptr-1] && ptr>0){
            swap(arr[ptr], arr[ptr-1]);
            ptr--;
        }
    }

    for(int ele: arr){
        cout<< ele << " ";
    }
}