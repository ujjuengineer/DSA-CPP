#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); // it means 5 size ka ek array ban gya and sare dabbe me 0 as an element default value dal jata hai
    cout<<v.size()<<endl<<v.capacity() << endl;
    // lets print the element
    for(int i=0; i<5; i++){
        cout<< v[i] << ','; // 0,0,0,0,0
    }
cout<<endl;
    vector<int> v2(5,7); // this created a vector of size 5 and each element have default value = 7;
    for(int i=0; i<5; i++){
        cout<< v2[i] << ' '; // 7 7 7 7 7 
    }
    cout<<"\n\n";
// printing a vector if we its size is unknown
    vector<int> vec;
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(65);
    v.push_back(7);
    v.push_back(65);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(65);
    v.push_back(7);
    v.push_back(65);

    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<",";
    }
}