#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    int num=7;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i;j<v.size();j++){
            if(v[i]+v[j]==num){
                cout<<i <<" "<<j <<endl;
            }
        }
    }
}