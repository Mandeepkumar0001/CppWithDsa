// Write a program to change the given matrix with its transpose. [Leetcode 867]

#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={2,3,4,7,8,9,5,6,7};
    cout<<"Before transpose"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"after transpose"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
