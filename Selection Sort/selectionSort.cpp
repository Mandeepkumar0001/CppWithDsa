#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={20,3,12,10,14};
    for(int i=0;i<5;i++){
        int minIndx=i;
        for(int j=i+1;j<5;j++){
            if(arr[minIndx]>arr[j]){
                minIndx=j;
            }
        }
        swap(arr[i],arr[minIndx]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}