#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={4,2,6,8,7,1};
    vector<int> nv;
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        int p;
        p=v[i];
        nv.push_back(p);
    }
    for(int k=0;k<v.size();k++){
        cout<<nv[nv.size()-(k+1)]<<" ";
    }
}