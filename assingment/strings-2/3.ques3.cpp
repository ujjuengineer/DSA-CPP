// input a string and return the number of substring that contain only vowels
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<< endl<<"enter string of length less than 10: ";
    getline(cin, str);
    int n = str.size();

    // number of possible sub-string of a string of length n is 
    // 1+2+3+4...+n i.e., n*(n+1)/2

    // algo: we will find all the substring consisting vowels only

    int count =0;
    int substr = 0;
    int ptr = 0;
    bool flag = false;
    while(ptr<=n-1){
        if(str[ptr]=='a'|| str[ptr]=='e' || str[ptr]=='i' || str[ptr]=='o' || str[ptr]=='u'){
            count++;
            flag = true;
        }
        else{
            substr = substr + (count*(count+1)/2);
            flag=false;
            count=0;
        }
        ptr++;
    }
    if(flag==true)//means last me vowel hi tha and wo humne substring me add nhi kra hai, so we will add here
        substr = substr + (count*(count+1)/2);
    

    cout<<"The number of substring that contains only vowel are: "<<substr<< endl<<endl;
}