#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &arr){
    int size=arr.size();
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            if(i!=j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(2);
    v.push_back(-1);
    display(v);
}
