// take a=3, b=4, c=5 input and print following pattern
// *
// **
// ***
// *
// **
// ***
// ****
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;
int main(){
    // int a, b, c;
    // cin>>a>>b>>c;
    // for(int i=1; i<=a; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=b; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=c; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // lets do this in short way
    int x;
    for(int m=1; m<=3; m++){
        cout<<"enter x ";
        cin>>x;
        for(int i=1; i<=x; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
