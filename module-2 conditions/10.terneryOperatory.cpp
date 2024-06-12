/* same like if else statement, syntax : condition ? expression1 : experession 2
   expression 1 runs if condition is true otherwise expression 2 runs */

// lets try with even odd question
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    (num%2==0) ? cout<<"even num" : cout<<"odd num";
    // condition ? true : false ;
}