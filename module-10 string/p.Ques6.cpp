// given a string consisting of lowercase english alphabets. print the character that is occurring most number of times.

//Meathod1: brut force meathod

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    int n= s.size();

    int maxi = 0;
    for(int i=0; i<s.size(); i++){
        int count = 0;
        for(int j=i; j<n; j++){
            if(s[i]==s[j]) count++;
        }
        if(count>maxi) maxi = count;
    }

    for(int i=0; i<s.size(); i++){
        int count = 0;
        for(int j=i; j<n; j++){
            if(s[i]==s[j]) count++;
        }
        if(count==maxi) cout<<s[i]<<" "<<maxi<<endl;
    }
    
    
    
    

}