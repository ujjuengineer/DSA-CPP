#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks ";
    cin>>marks;
    if(marks>90){
        cout<<"excellent";
    }
    else if(marks>80){
        cout<<"very good";
    }
    else if(marks>70){
        cout<<"good";
    }
    else if(marks>60){
        cout<<"can do better";
    }
     else if(marks>50){
        cout<<"avrage";
    }
    else if(marks>40){
        cout<<"below average";
    }
    else{
        cout<<"fail";
    }
}