// input a string of size n and update all the even positions in the string to character 'a'. consider 0-based indexing
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter your string size: ";
    cin>>n;
    string str[n]; 
    
    // taking input in n
    cout<<"enter the characters: ";
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    // printing 
    // cout<<str<< endl;

    // updating value
    for(int i=0; i<n; i++){
        if(i%2==0) str[i]='a';
    }
    // printing updated value
    // cout<<str << endl;
    for(int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }
    
    //  DOUBTS: 
    // if we are initialising the string as string str = "ujjwal" and then printing as cout<< str; --> this is printing our string
    // where as if we are initialising string as string str[n]; and then printing the string after taking input, then it is printing the address !!
    // if we are using loop to print the string then it is printing normally
    // why ??

    // solution: arr[n] is not a string, it become array of string, so each string act as its element, if we put arr[2] then it will take input of 2 string, let say it ujjwal and kumar, so ujjwal is at 0th index and kumar is at 1st index.
    // we also know from array that cout<< array will print the address of the array not the element of the array
}