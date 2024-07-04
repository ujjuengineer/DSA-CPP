#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // declaration
    v.push_back(4);
    cout<< v.size()<< endl;
    cout<<sizeof(v)<<endl; // this is giving 24, what is this ??
    
    v.push_back(8);
    cout<< v.size()<< endl;
    cout<<sizeof(v)<<endl; //24
    
    v.push_back(7);
    cout<< v.size()<< endl;
    cout<<sizeof(v)<<endl; //24
    
    v.push_back(3); 
    cout<< v.size()<< endl; 
    cout<<sizeof(v)<<endl; //24
    // v.size gives the number of element present in the vector
cout<< endl;

    vector<int> v2;
    v2.push_back(3); //1 box
    cout<< v2.capacity() << endl;
    v2.push_back(5); // 2 box
    cout<< v2.capacity()<< endl;
    v2.push_back(33); // 4 box
    cout<< v2.capacity()<< endl;
    v2.push_back(23); // 4 box
    cout<< v2.capacity()<< endl;
    v2.push_back(39); // 8 box
    cout<< v2.capacity()<< endl;
    // v.capacity gives the number of boxes present at the current time in vector
cout<< endl;
    // what is pop back
    vector<int> v3;
    v3.push_back(6); 
    v3.push_back(1); 
    v3.push_back(9);
    v3.push_back(10);

    v2.pop_back(); // this will simply delete my last element of v3 vector, doing pop back will decrease my size but not capacity
    cout<<v3[3];

// doubt: if the above command is deleting our last element of v3, then why it print v3[3], after giving print command
}