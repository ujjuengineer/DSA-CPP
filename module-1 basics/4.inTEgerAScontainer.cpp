#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<< endl;
    x = x + 6;  // updation in the value of x
    cout<<x<<endl;
   
    /*another way to do x = x + 5 ----> x += 5
    similarly we can do with other arthmatic operation
    x = x - 5  ---> x -= 5
    x = x * 5 ---> x *= 5
    x = x / 5 ---> x /= 5, note : no space between += or -= or *= */

    return 0;
}
