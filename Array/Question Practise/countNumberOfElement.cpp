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
    int count=0;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x<arr[i]){
            count++;
        }
    }
    cout<<"total numbers are greater than "<<x<<" is: "<<count;
}