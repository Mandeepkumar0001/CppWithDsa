#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={72,80,60,22,50};
    arr.push_back(40);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        
    }
}