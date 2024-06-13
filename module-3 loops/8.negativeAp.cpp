#include <iostream>
using namespace std;
int main(){ // ap: 100,97,94,... upto all positive term
    int a = 100;
    // yaha we can directly use condition a > 0
    // for(int i = 1; a>0 ; i++){
    //     cout<<a<<" ";
    //     a -= 3; 
    // }

    // yaha i ka use hi nhi ho rha hai so we can also remove i
    for(;a>0;){ // while loop ka syntax similar hi hota hai
        cout<<a<<" ";
        a -= 3; 
    }
    cout<<endl<<endl;
    // infact we can also use it as
    for(int a = 100; a>0 ; a-=3){
        cout<<a<<" ";
    }
}