#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    int no_of_term = n-1;
    int nsp =1;
    for(int i= 1; i<=n-1; i++){
        int num = 1;
        for(int j = 1; j<=no_of_term; j++){
            cout<<num<<" ";
            num++;
        }
        for(int k=1; k<=nsp; k++){
            cout<<"  ";
            num++;
        }
        for(int l=1; l<=no_of_term; l++){
            cout<<num<<" ";
            num++;
        }
        no_of_term--;
        nsp+=2;
        cout<<endl;
    }
}