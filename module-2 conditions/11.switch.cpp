/* switch is an alternate of if else statement */

#include <iostream>
using namespace std;
int main(){
    cout<<"enter day number ";
    int num;
    cin>>num;
    switch(num){
        /* isme hota ye hai ki agar case 1 satisfy kr gya then other case nhi dekhega.. but other case k andar jo likha hai wo sav print kr dega...
        let user ne input diya 4, then case 4 satisfy kiya, now case 4 k niche wala sab statement print kr dega */
        // iss se bachne k liye we use break... see 12th file 
        case 1 :
            cout<<"monday";
        case 2 :
            cout<<"tuesday";
        case 3 :
            cout<<"wednesday";
        case 4 :
            cout<<"thursday";
        case 5 :
            cout<<"friday";
        case 6 :
            cout<<"saturday";
        case 7 :
            cout<<"sunday";
            
    }
}