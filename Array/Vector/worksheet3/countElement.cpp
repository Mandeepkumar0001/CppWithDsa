// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &arr,int x){
    int index=0;
    for(int i=0;i<arr.size();i++){
        if(x<arr[i]){
            index++;
        }
    }
    cout<<index;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(8);
    display(v,5);
}
