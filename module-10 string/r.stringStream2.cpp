// given a sentence "str", return the world that is occurring most number of times in that sentence
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str = "i am ujjwal kumar, i m ruler of this";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // now we will sort this vector so that they similar word remains at same place
    sort(v.begin(), v.end());
    // for(int i=0; i<v.size(); i++){
    //     cout<< v[i]<<" ";
    // }
    // cout<<endl;
    
    // int maxcount = 0;
    // int count = 1;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==v[i+1])count++;
    //     else {
    //         if(maxcount<count)
    //             maxcount = count;
    //         count = 1;
    //     }
    // }
    // // printing maximum
    // count = 1;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==v[i+1]) count++;
    //     if(count==maxcount){
    //         cout<<v[i]<<"->"<<maxcount<<endl;
    //         count = 1;
    //     }
    // }

    // counting max
    int n = v.size();
    int ptr = 0;
    int count = 1;
    int maxcount = 0;
    while(ptr<n-1){
        if(v[ptr]==v[ptr+1])count++;
        else{
            if(maxcount<count) maxcount=count;
            count=1;
        }
        ptr++;
    }
// printing max
    ptr=0; count=1; 
    while(ptr<n){
        if(v[ptr]==v[ptr+1])count++;
        else{
            if(count==maxcount){
                cout<< v[ptr]<<"-->"<<maxcount<<endl;
            }
            count=1;
        }
        ptr++;
    }
}