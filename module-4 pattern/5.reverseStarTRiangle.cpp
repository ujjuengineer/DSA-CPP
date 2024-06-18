#include<iostream>
using namespace std;
int main(){
    int height_of_triangle ;
    cout<<"enter the triangle length ";
    cin>>height_of_triangle;
    int x = height_of_triangle;
    for(int i=1; i<=height_of_triangle; i++){
        for(int j=x; j>=1; j--){
            cout<<"*";
        }
        x--;
        cout<<endl;
    }
}
// we can solve this by various meathod, see file number 6;



