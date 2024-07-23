#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,5,3,4,6,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0],slargest;
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            slargest=largest;
            largest=arr[i];
        }else if(slargest<arr[i] && arr[i] !=largest){
            slargest=arr[i];
        }
    }
    cout<<" Second largest is: "<<slargest;
    return 0;
}