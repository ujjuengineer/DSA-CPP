#include <iostream>
using namespace std;
int main(){
   // m-2 : using 2nd variable
   // lets we have to print 2,4,6,8,10...
   int n;
   int a = 2;
   cout<<"enter num of terms ";
   cin>>n;
   for(int i = 1; i<= n; i++){
        cout<<a<<" ";
        a += 2;
   }
}