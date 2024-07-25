#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    int U=0;
    for(int i=0;i<v.size();i++){
        U =U^v[i];
    }
    cout<<"Unique Value is: "<<U;
}
int main(){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(6);
    display(v1);
}
