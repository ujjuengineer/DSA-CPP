// we can assume string as a vector of characters
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ujjwal is a don";
    
    // finding length
    cout<< str.size() << endl;
    // this will not include that null character present at the end
    // we can also use str.length()
    cout<< str.length() << endl;

    // push_back
    string s1 = "abcd";
    cout<<s1<<endl;
    s1.push_back('e');
    s1.push_back('f');
    cout<<s1<<endl;
    // note: we can only push back a single character through this function, if you try to push back a string using this then it will show error

    // pop back
    s1.pop_back();
    s1.pop_back();
    cout<<s1<<endl;

    // reverse()
    string s = "ujjwal";
    reverse(s.begin(), s.end());
    cout<< s << endl;
    
    //we can revere a part of this string as well using its index
    string r = "0123456"; 
    // reversing 2nd and 3rd index
    reverse(r.begin()+2, r.begin()+1+3);// last me ek extra +1 krna hota hai
    cout<<r<<endl;
}