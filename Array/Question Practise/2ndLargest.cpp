#include<iostream>
using namespace std;
int main(){
    int arr[]={12,5,15,45,76};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0],slargest;
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            slargest=largest;
            largest=arr[i];
        }else if(largest>arr[i] && largest != slargest){
            slargest=arr[i];
        }
    }
    cout<<" Second largest is: "<<slargest;
    return 0;
}