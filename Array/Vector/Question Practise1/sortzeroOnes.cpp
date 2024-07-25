#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v1){
    int NOZ=0;
    int NOO=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==0) NOZ++; else NOO++;
    }
    for(int i=0;i<v1.size();i++){
        if(i<NOZ) v1[i]=0; else v1[i]=1;
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
}