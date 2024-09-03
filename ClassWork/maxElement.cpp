#include<iostream>
using namespace std;
int main(){
    int arr[]={10,2,15,8,26,20};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"max element is: "<<max;
}