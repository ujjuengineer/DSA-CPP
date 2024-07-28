// given n strings in a vector consisting of digits from 0 to 9. return the index of string which has maximum value (take 0 based indexing)
#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","00182","940","002900"};
    int n = sizeof(arr)/sizeof(arr[0]);
    // we have to do 2 things, first we have to find the maximum and then we have to print the same string that is maximum
    
    int max = stoi(arr[0]); // we use this to store max int val
    string maxs = arr[0]; // we use this to store max string 
    for(int i=0; i<n; i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxs = arr[i]; 
        }
    }
    // now we can print max int as well as string
    cout<< maxs <<" "<< max;
}