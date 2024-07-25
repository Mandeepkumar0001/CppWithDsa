#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    int Noz=0;
    int Noo=0;
    int Not=0;
    for(int i=0;i<v.size();i++){
        if(0==v[i]){
            Noz++;
        }else if(1==v[i]){
            Noo++;
        }else{
            Not++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<Noz) v[i]=0;
        else if(i<Noz+Noo) v[i]=1; else v[i]=2;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> m;
    m.push_back(0);
    m.push_back(1);
    m.push_back(0);
    m.push_back(2);
    m.push_back(1);
    m.push_back(0);
    m.push_back(2);
    m.push_back(0);
    display(m);
}