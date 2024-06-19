// for input = 4
// ABCDEFG 
// ABC EFG 
// AB   FG 
// A     G
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int x=0;
    for(int i=1; i<=2*n-1; i++){
        cout<<(char)('A'+x);
            x++;
    }
    cout<<endl;

    int no_of_term = n-1;
    int nsp = 1;
    for(int i=1; i<=n-1; i++){
        int character_num = 0;
        for(int j=1; j<=no_of_term; j++){
            cout<<(char)('A'+character_num);
            character_num++;
        }
        
        for(int k = 1; k<=nsp; k++){
            cout<<" ";
            character_num++;
        }
        nsp += 2;
        for(int l=1; l<=no_of_term; l++){
            cout<<(char)('A'+character_num);
            character_num++;
        }
        no_of_term--;
        cout<<endl;
    }
}