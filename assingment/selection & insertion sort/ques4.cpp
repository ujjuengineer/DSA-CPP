//given an array of digits(values are from 0 to 9), the task is to find the minimum possible sum of two numbers fromed from digits of the array. please note that all the digits of given array must be used to form the two numbers.

/* 
Input: {6, 8, 4, 5, 2, 3}
Output: 604
Explanation: The minimum sum is formed by numbers 358 and 246

Input: {5, 3, 0, 7, 4}
Output: 82
Explanation: The minimum sum is formed by numbers 35 and 047 */

// A minimum number will be formed from set of digits when smallest digit appears at most significant position and next smallest digit appears at next most significant position and so on. The idea is to sort the array in increasing order and build two numbers by alternating picking digits from the array. So first number is formed by digits present in odd positions in the array and second number is formed by digits from even positions in the array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={5, 3, 0, 7, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // insertion sort
    for(int i=1; i<n; i++){
        int j = i;
        while(arr[j]<arr[j-1] && j>=1){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    int a=0, b=0;
    
    for(int i=0; i<n; i++){
        if(i%2==0){
            a = a*10 + arr[i];
        }
        else b = b*10 + arr[i];
    }

    cout<<"the minimum sum is formed by numbers "<<a <<" and "<<b<< " is "<< a + b;
}