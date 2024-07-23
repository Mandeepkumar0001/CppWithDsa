#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    int EvenIndex=0,OddIndex=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0) v[i] +=10;
        else v[i] *=2;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(4);
    display(v1);
}
