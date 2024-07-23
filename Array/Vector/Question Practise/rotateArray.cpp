#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int k){
    vector<int> narr(v.size());
    for(int i=0;i<v.size();i++){
        narr[(i+k)%v.size()]=v[i];
    }
    cout<<"after rotating: "<<endl;
    for(int i=0;i<narr.size();i++){
        cout<<narr[i]<<" ";
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    display(v1,4);
}