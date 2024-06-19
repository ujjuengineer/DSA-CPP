// for input = 4
// *
// **
// ***
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int col = 1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=col; j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<(2*n)/2) col++;
        else col--;
    }
}