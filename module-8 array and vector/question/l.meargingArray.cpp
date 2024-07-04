// mearge 2 shorted arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr1[]={1,4,5,8};
    int arr2[]={2,3,6,7,10};
    vector<int> v;
    int sizeofarr1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizeofarr2 = sizeof(arr2)/sizeof(arr2[0]);
    int a = 0, b = 0, c = 0; 
    // a-pointer of arr1, b-pointer of arr2, c- pointer of v
    while(a<sizeofarr1 && b<sizeofarr2){
        if(arr1[a]<arr2[b]){
            int x = arr1[a];
            v.push_back(x);
            a++;
        }
        if(arr1[a]>arr2[b]){
            int x = arr2[b];
            v.push_back(x);
            b++;
        }
        if(arr1[a]==arr2[b]){
            int x = arr1[a];
            v.push_back(x);
            a++; b++;
        }
    }
    // filling remainging element
    if(sizeofarr1>sizeofarr2){
        for(int i = a; i<sizeofarr1; i++){
            int x = arr1[i];
            v.push_back(x);
        }
    }
    if(sizeofarr1<sizeofarr2){
        for(int i = b; i<sizeofarr2; i++){
            int x = arr1[i];
            v.push_back(x);
        }
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
// another meathod of doing this is start your pointer from last of the array and fill the bigger one in vector
// refer leetcode problem 88