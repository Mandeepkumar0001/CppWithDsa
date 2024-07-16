#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==arr[i]){
            cout<<"your value: "<<arr[i]<<" is equal to :"<<i<<" position"<<endl;
        }
    }
}