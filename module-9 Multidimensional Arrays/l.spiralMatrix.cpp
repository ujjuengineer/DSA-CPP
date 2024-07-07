// WAP to print the matrix in spiral form
// leetcode-54
#include<iostream>
using namespace std;
int main(){
// 1 2 3 4 5
// 6 7 8 9 0   we have to print it as 1 2 3 4 5 0 6 7 7 3 5 9 3 
// 3 5 6 4 6                                6 7 8 9 4 6 5...
// 9 5 3 7 7
    int m,n;
    cout<<"enter the row and col of the matrix: ";
    cin>>m>>n; 
    int matrix[m][n];
    cout<<"enter the element of the matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int maxr = m-1, minr = 0;
    int maxc = n-1, minc = 0;
    while(maxr>=minr && maxc>=minc){
        // pehle right move krenge, row constant rhega
        for(int j=minc; j<=maxc; j++){
            cout<<matrix[minr][j]<<" ";
        }
        minr++;
        if(minc>maxc || minr>maxr) break;

        // now niche jaaeng, col constant rhega
        for(int i=minr; i<=maxr; i++){
            cout<<matrix[i][maxc]<<" ";
        }
        maxc--;
        if(minc>maxc || minr>maxr) break;

        // now moving left, row constant rhega
        for(int j=maxc; j>=minc; j--){
            cout<<matrix[maxr][j]<<" ";
        }
        maxr--;
        if(minc>maxc || minr>maxr) break;

        // now moving up, col constant rhega
        for(int i=maxr; i>=minr; i--){
            cout<<matrix[i][minc]<<" ";
        }
        minc++;
    }
}