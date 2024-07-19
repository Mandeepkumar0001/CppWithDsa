#include<iostream>
using namespace std;
void fun(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    arr1[2]=25;
    fun(arr1);
}