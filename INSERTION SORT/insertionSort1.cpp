#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={10,20,12,2,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else{
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
