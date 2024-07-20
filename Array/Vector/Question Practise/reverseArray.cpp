#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"inter the size of vector"<<endl;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int k=0;k<n;k++){
        cout<<v[v.size()-(k+1)]<<" ";
    }
}