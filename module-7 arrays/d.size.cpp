#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,43,54,53,5,7,42,5,7,6,7687,67,5,54,4,5453,43,4,4,54,4,4575,43};
    // now we don't know the how many element are there in my array but we can find using following meathod
    int size = sizeof(arr)/ sizeof(arr[0]); // yaha humne total element size of array ko single element size of array se divide kr diya
    cout<<size<<endl;
    // we can also do like 
    size = sizeof(arr)/4; // ye int array hai so single element humara 4 byte store krega so divided it by 4
}