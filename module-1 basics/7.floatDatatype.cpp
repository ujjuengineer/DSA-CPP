#include<iostream>
using namespace std;
int main (){
    // operation between float and intger always gives float
    cout<< 5/2 << endl;
    cout<< 5.0/2 << endl;
    cout<< 5/2.0 << endl;

    float x = 5;
    float y = 2;
    cout << x / y << endl;
    int z = x / y; // yah x/y ka value to 2.5 hi aaega but since z is an integer container, it will only contain 2 not 2.5 
    cout << z << endl; // and here it will print 2

    float d = 2/7;
    cout<<d<<endl; // yaha 2 & 7 int hai hence 2/7 =0, now this 0 is stored in float d... hence here it will give 0

    // now if we replace 2--> 2.0 or 7-->7.0 then following happens
    d = 2/7.0;
    cout<<d<<endl; // now here we will get actual answer

    return 0;
}