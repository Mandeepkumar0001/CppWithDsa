#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,4,3,6,2};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
}