#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}