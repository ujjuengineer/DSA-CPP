#include <iostream>
using namespace std;
int main(){
    int x = 3, y, z;
    y = x = 10; // assingment and conditional operator right to left calculate hota hai
    z = x < 10 ; // remember presidency table
    cout << "x = " << x << " y = "<< y << " z = " << z;
}