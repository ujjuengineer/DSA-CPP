// find the first non repeating element in the array
// Input: {-1, 2, -1, 3, 0}
// Output: 2
// Explanation: The first number that does not repeat is : 2

// Input: {9, 4, 9, 6, 7, 4}
// Output: 6

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of ele in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool flag;
    int i;
    for(i=0; i<n; i++){
        flag = true;
        for(int j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                flag = false;
            }
        }
        if(flag == true) break;
    }
    if(flag == false)cout<<"no unique element";
    else cout<<"first non-repeating element is: "<<arr[i];
}