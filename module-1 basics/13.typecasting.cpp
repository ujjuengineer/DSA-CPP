#include<iostream>
using namespace std;
int main(){
    // we can directly change float into int as follow
    float f = 6.9;
    int i = f;
    cout<<i<<endl ; // but this is not the conventional meathod

    // how to convert float into int
    float num1 = 8.9;
    int num2 = (int) num1;
    cout<< num2 << endl;

    bool x = true;
    cout<<x+3<<endl; // ans = 4; yaha pehle true apna typecasting kr k integer me transform ho rha hai and then +3 kr rha hai

    // we can do the same as follow
    bool z1 = false;
    int z2 = (int)z1; // here we converted bool into intger
    cout<<z2+6; // ans = 6
}