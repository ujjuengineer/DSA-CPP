#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a; // a me pda address pe jao and uska value temp me store kr do --> temp = x;
    *a = *b;// x = y
    *b = temp; // y = temp i.e., x
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(&x, &y);// swap fun me a and b ka address de diya
    cout<<x<<' '<<y;
}