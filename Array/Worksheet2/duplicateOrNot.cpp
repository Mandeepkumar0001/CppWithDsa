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
    int duplicate=arr[0];
    int d=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(duplicate==arr[j+1]){
                d++;
            }
        }
        duplicate=arr[i+1];
    }
    if(d>0){
        cout<<"yes this array contains duplicates value:";
    }else{
        cout<<"not comtain duplicate value: ";
    }
}