// for row = 4 and col = 6
// * * * * * *
// *         *
// *         *
// * * * * * *
#include <iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"enter num of row ";
    cin>>row;
    cout<<"enter num of col ";
    cin>>col;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || j==1 || i==row || j==col){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}