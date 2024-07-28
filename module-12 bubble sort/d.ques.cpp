// sort a string in decreasing order of values associated after removal of values smaller than x
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDYXJK";

    // first we will make a string which consist the element greater than or equal to Y
    string str;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    int n = str.size();
    // now we can sort this by inbuilt sort function
    // sort(str.begin(),str.end());

    // sorting using bubble sort
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(str[j]>str[j+1]){
                swap(str[j], str[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }

    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
}