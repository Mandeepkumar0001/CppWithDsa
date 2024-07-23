#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k=3;
    vector<int> arr={5,2,3,7,8,4,9,61,5,8,7,5,2,3};
    vector<int> narr(arr.size());
    for(int i=0;i<arr.size();i++){
        narr[(i+k)%arr.size()]=arr[i];
    }
    cout<<"after rotating: "<<endl;
    for(int i=0;i<narr.size();i++){
        cout<<narr[i]<<" ";
    }
}