// wap to find the largest three elements in the array
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,45,3,15,34,26,31,67,8,9,54,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // pehle largest search krenge then 2nd lar then 3rd lar
    int lar1, lar2, lar3;

    // finding lar
    lar1=INT_MIN;
    for(int i=0; i<n; i++){
        if(lar1<arr[i]) lar1=arr[i];
    }
    cout<<"largest element is "<<lar1<<endl;

    // findig 2nd lar
    lar2=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<lar1 && lar2<arr[i]) lar2=arr[i];
    }
    cout<<"2nd lar element is: "<<lar2<<endl;

    // finding 3rd lar
    lar3=INT_MIN;
    for(int i=0; i<n ;i++){
        if(arr[i]<lar2 && arr[i]>lar3) lar3=arr[i];
    }
    cout<<"3rd largest element is: "<<lar3; 
}