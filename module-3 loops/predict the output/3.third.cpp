#include<iostream>
using namespace std;
int main(){
    int x = 4, y =0, z;
    while(x>=0){
        if(x==y)
            break;
        else
            cout<< x <<" "<<y<<endl;
            x--;
            y++;
    }
}
/* x=2
y = 2

4 0
3 1
*/