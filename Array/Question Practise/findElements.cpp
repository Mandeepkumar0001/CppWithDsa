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
    int x;
    cout<<"enter the searchable number"<<endl;
    cin>>x;
    int p=0;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            p++;
        }
    }if(p>0){
        cout<<"your number is present";
    }else{
        cout<<"not present";
    }
}