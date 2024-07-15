#include<iostream>
using namespace std;
int main(){
    int arr[5]={40,15,30,25,85};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of elements are: "<<sum;
}