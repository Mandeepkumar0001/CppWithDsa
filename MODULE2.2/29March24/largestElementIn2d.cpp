// Write a C++ program to find the largest element of a given 2D array of integers

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the value of raw & coloum"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(largest<arr[i][j]){
                largest=arr[i][j];
            }
        }
    }
    cout<<"largest element is: "<<largest;
    return 0;
}