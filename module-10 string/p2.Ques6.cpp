// given a string consisting of lowercase english alphabets. print the character that is occurring most number of times.

//Meathod 2: using vector

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    int n= s.size();

    // we will create a vector of length 26 and default value 0, then we will map every index of that vector with ascii value of the alphabet
    vector<int> v(26,0);
    // ascii value of alphabet start from 97,98,99...
    // and index will start from 0,1,2,3...
    // to store 'd' in vector, we will find x=ascii(d)-97, this will give 3 i.e., 4th index of the vector. now we will just do  v[x]++ to increase the count of d.
    for(int i=0; i<n; i++){
        char ch = s[i];
        int ascii = (int)ch;
        int x = ascii - 97;
        v[x]++;
    }
    // finding max
    int maxi = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>maxi) maxi = v[i];
    }
    // printing max
    for(int i=0; i<v.size(); i++){
        if(v[i]==maxi){
            int x = i + 97; // ascii of out character
            char ch = (char) x;
            cout<< ch <<" "<< maxi<<endl;
        }
    }
}