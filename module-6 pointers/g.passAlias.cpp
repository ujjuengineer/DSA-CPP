#include<iostream>
using namespace std;
void swap(int &x, int &y){ // yaha pe bas x and y argument k jgh &x and &y le liya
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<' '<<y;
}