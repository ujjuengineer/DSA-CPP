// leetcode-14
// Input n strings and write a program to find the longest common prefix string of all the strings

#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of string: ";
    cin>>n;
    vector<string> v(n);
    cout<<"enter " << n<<" strings";
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    sort(v.begin(), v.end());
 
    // algorithm : we will sort the vector and then compare first and last string of the vector only. all the elements that are similar in first and last string, will also be present in remaining strings

    // NOte: we can get the size of first and last string as v[0].size and v[n-1].size
    string first = v[0];
    string last = v[n-1];
    string ans = "";
    bool flag = false;
    for(int i=0; i<min(first.size(), last.size()); i++){
        if(first[i]==last[i]){
             ans += first[i];
             flag = true;
        }
        else break; // jese hi different mila we hi break kr diya
    }
    
    if(flag==true) cout<< ans;
    else cout<<"no common prefix";
}