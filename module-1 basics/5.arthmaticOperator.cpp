#include <iostream>
using namespace std;
int main (){
    int x = 5;
    int y = 2;
    int z = x / y;
    cout<< z; // wonder why the answer is 2, not 2.5
    // actually z is integer container and hence it will contain integer value only, even if we directly print x/y, it will give us the same answer
    return 0;
}