// find the last occurrence of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<< "enter the number of element in vector: ";
    cin >> n;
    int x;
    cout<<"enter elements of vector: ";
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    
    // finding the occurence of int y in vector v;
    int y; 
    cout<<"enter the number you want to find: ";
    cin>>y;
    int lastOccurrence;
    bool flag = false;
    // for(int j=0; j<v.size(); j++){
    //      if(v[j]==y){
    //         flag = true;
    //         lastOccurrence = j; 
    //      } 
    // }

    for(int i= v.size()-1; i>=0; i--){ // backward loop
        if(v[i]==y){
            flag = true;
            lastOccurrence= i;
            break;
        }
    }
    if(flag == true)cout<<lastOccurrence;
    else cout<<"ERROR 404 : element not found";
}