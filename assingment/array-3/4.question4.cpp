// move all zero to the end of the array

// Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
// Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

// Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
// Output : arr[] = {1, 2, 3, 6, 0, 0, 0};
#include<iostream>
using namespace std;
void rotate(int arr[], int a, int b){
    for(int i=a,j=b; i<j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n;
    cout<<"enter the number of ele in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //algorithm : we will use two pointer one at first and second at last
    int a = 0, b = n-1;
    while(a<b){
        if(arr[a]==0){
            rotate(arr,a,b);
            b--; 
            rotate(arr,a,b);
        }
        else a++;
    }
    // printing arr
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}