#include <iostream>
using namespace std;
int main (){
    // post incriment : pehle perform the tasl then increase value
    int x = 5;
    cout<< x++ << endl; 
    /* it means pehle x ka value print kro and then usme incriment hence yaha 5 print kr diya and x me 1 value add kr diya hoga if we now print x, it will give 6 */
    cout<< x << endl;

    // pre incriment : pehle increase the value then perform the task
    int y = 7;
    cout<< ++y; // it will directly print 8
    return 0;
}