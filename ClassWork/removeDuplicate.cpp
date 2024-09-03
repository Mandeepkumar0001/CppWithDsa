#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,3};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                arr.erase(arr.begin()+j);
                j--;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}