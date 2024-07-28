#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "kutta";
    cout<<str<<endl;
    // 'a' is at 4th index
    str[4]='i';
    cout<<str; // note that we are doing this because this is not an array, if we do such shit in array it will print the address of the array
    cout<<endl;
    // note: we can not do this in java

    
}