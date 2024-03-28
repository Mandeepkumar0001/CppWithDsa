// Write a program to add two matrices

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter size of 1st array"<<endl;
    cin>>r>>c;
    int A[r][c];
    int m,n;
    cout<<"enter size of 2nd array"<<endl;
    cin>>m>>n;
    int B[m][n];
    if(r!=m && c!=n){
        cout<<"addition is not possible"<<endl;
    }else{
        cout<<"enter value of 1st array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"enter value of 2nd array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    int C[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Sum of array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}