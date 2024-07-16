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
    int largest=arr[0],slargest=0;
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            slargest=largest;
            largest=arr[i];
        }
    }
    cout<<"Second Largest number is: "<<slargest;
}