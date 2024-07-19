#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
for(int i=0;i<10;i++){
    int p;
    cin>>p;
    v.push_back(p);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    }
}