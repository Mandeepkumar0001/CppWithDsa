// Write a program to print sum of all the elements of a 2D matrix.

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter size of array"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter value of array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum +=arr[i][j];
        }
    }
    cout<<"sum of all elements are: "<<sum;
    return 0;
}