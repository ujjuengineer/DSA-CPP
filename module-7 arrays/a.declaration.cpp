#include<iostream>
using namespace std;
int main(){
    int arr[7]; // 7 dabbe ban gye 0,1,2,3,4,5,6
    arr[0]=1; // first dabbe me 1 daal diya
    arr[4] = 4; // 4th dabbe me 4 daal diya, similarly we can store different values in different dabba
    cout<<arr[4]<<' '<<arr[0]<<endl<<endl;

    // 2nd meathod to initilise the arrays
    float arr2[4]= {2,3,4,5}; // 4 dabbe wala array bnaya and usme respectively 2,3,4,5 values daal diya
    cout<< arr2[0]<<' '<<arr2[1]<< " "<< arr2[2]<<' '<<arr2[3]<< endl<< endl;

// if we use second meathod to declare the array then we can ignore the mention of the size of array
    int arr3[]={1,2,3,4}; // jitna element right side denge utne size ka aray bna dega automatically. now we can print the value of the array
    cout<< arr3[3]; 
}