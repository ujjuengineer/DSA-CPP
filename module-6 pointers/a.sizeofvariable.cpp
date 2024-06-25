/* 1 bytes = 4 bits --> (2 to the power 4)/2 = 2 to the power 3 --> so any datatype of size 4 bits can store number from 
(-2 to the power 3) to {(2 to the power 3)-1}, -1 iss liye kyuki bich me ek zero v aa jata hai */

// we use sizeof to know the size of the variable
#include<iostream>
using namespace std;
int main(){
    cout<< sizeof(int) << endl; // 4 bytes 
    cout<< sizeof(bool) << endl; // 1 bytes 
    cout<< sizeof(char) << endl; // 1 bytes
    cout<< sizeof(float) << endl; // 4 bytes
    cout<< sizeof(long long) << endl; // 8 bytes
}