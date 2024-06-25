#include<iostream>
using namespace std;
void first_last(int n, int* fd, int* ld){ 
    *ld = n%10;
    while(n>=10){
        n /= 10;
    }
    *fd = n;
}
int main(){
    int n;
    cout<<" enter n : ";
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    first_last(n, ptr1, ptr2);
    cout<<"first digit : "<< firstDigit<< " last digit: "<< lastDigit;
}