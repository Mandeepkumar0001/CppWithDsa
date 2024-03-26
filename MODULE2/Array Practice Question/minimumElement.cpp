// Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;
int main(){
    int arr[]={12,5,10,25,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum is: "<<min;
    return 0;
}