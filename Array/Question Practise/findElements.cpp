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
    int x;
    cout<<"enter the searchable number"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            cout<<"your number is found at:"<<i<<" position";
        }
    }
}