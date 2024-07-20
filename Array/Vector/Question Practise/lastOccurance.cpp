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
    v.push_back(3);
    v.push_back(1);
    int num=1;
    int index=-1;
    for(int i=0;i<v.size();i++){
        if(num==v[i]){
            index=i;
        }
    }
    cout<<index;
}