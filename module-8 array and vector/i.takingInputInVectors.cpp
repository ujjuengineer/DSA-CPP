#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0; i<5; i++){
        cin>> v[i];
    }
    for(int i=0; i<5; i++){
        cout<< v[i]<< " ";
    }
    cout<<endl;
// the above code will work only when we have defined the size of vector

// taking input without defining size
    vector<int> v2;
    int n;
    cout<<"enter the number the elements you want to enter: ";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
}