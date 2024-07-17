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
    int mean=0;
    for(int i=0;i<n;i++){
        mean=(mean+arr[i]);
        cout<<mean/(i+1)<<" ";
    }
}