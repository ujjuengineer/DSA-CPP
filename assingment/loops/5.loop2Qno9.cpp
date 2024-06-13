// write a programme to print out all armstrong numbers between 1 and 500. if the sum of the cubes of each digit og the number is equal to the number itself, then the number is called an armstrong number. for example 153 = (1*1*1)+(5*5*5)+(3*3*3)
#include <iostream>
using namespace std;
int main(){
    int lastDigit, cube;
    for(int i = 1; i<=500; i++){
        int sum = 0;
        int num = i;
        while(num>0){
            lastDigit = num%10;
            cube = lastDigit*lastDigit*lastDigit;
            sum = sum + cube;
            num /= 10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    
}