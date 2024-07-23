#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    int L=v[0],SL=0,TL=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>L){
            TL=SL;
            SL=L;
            L=v[i];
        }else if(v[i]>SL && v[i]!=L){
            TL=SL;
            SL=v[i];
        }else if(v[i]>TL && v[i]!=SL){
            TL=v[i];
        }
    }
    cout<<L<<" "<<SL<<" "<<TL;
}
int main(){
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(17);
    v1.push_back(8);
    v1.push_back(22);
    v1.push_back(2);
    v1.push_back(1);
    display(v1);
}
