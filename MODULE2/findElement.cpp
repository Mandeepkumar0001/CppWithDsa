// Find the element x in the array . Take array and x as input.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the size of array"<<endl;
    int arr[m];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter element that you want to find"<<endl;
    cin>>key;
    int ans;
    for(int i=0;i<m;i++){
        if(arr[i]==key){
            ans=i;
        }
    }
    cout<<"your element available at the "<<ans<<" index";
    return 0;
}
