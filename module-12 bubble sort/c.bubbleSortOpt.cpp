#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // in this optimised version we will create a check mark to check wether our array is sorted now or not, if it is then we will break the loop
    for(int i=0; i<n-1; i++){ // n-1 passes
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){// swap
                swap(arr[j],arr[j+1]);
                flag = false;
            }
            // agar if condition hit nhi kiya pure loop me means arr[j] is not greater than arr[j+1] and we can say arr is sorted
        }
        if(flag==true)break;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
 