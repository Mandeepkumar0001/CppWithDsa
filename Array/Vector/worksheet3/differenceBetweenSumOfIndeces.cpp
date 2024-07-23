#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    int EvenIndex=0,OddIndex=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0) EvenIndex +=v[i];
        else OddIndex +=v[i];
    }
    cout<<"Differences is: "<<EvenIndex-OddIndex;
}
int main(){
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(6);
    display(v1);
}
