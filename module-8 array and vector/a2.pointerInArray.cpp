#include<iostream>
using namespace std;
// printing array
void call(int a[]){ // this is second meathod to create pointer for arr
    for(int i=0; i<=3; i++){
        cout<< a[i]<<" ";
    }
    cout<<"\n\n";
}
// updating array 
void update(int b[]){
    b[0]=90;
}

int main(){
    int arr[]={1,2,3,4};
    call(arr); 
    update(arr);
    call(arr);
}