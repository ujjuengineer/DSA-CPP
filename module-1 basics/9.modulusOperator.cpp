#include<iostream>
using namespace std;
int main (){
    // note : modulus operator always aplied on integers not on float number
    
    // if a<b --> a % b = a
    // a % -b == a % b
    // -a % b == - (a % b)
    // -a % -b == - (a % b)

    
    // what happen if we did -a%b ??
   
    cout << -5 % 2; // the answer is -1, this is because yaha BODMAS lag rha hai 
                    // 5 % 2 pehle calculate ho rha hai and then - se multiply ho rha h

    return 0;
}