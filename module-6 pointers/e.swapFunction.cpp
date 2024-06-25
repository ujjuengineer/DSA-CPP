#include<iostream>
using namespace std;
void swap(int x, int y){ // iss function me jo x and y hai wo different dabba hai, so iss function ko use krne se swap function ka x and y to interchange ho jaaega but main function ka x and y interchange nhi hoga
    int temp = x;
    x = y;
    y = temp; 
    return;
}
int main(){
    int x,y;
    cout<<"enter the numbers : ";
    cin>>x>>y;
    swap(x,y); 
    cout<<x<<" "<<y;
    // this is called pass by value
}