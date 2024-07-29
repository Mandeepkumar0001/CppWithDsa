#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1 ,vector<int> &arr2 )
{
    int n=arr1.size();
    int m=arr2.size();
    vector<int> res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }else{
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n){
        res[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        res[k]=arr2[j];
        j++;
        k++;
    }
    return res;
}
int main(){
    vector<int> v;
    v.push_back(31);
    v.push_back(41);
    v.push_back(51);
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    vector<int> r= merge(v,v1);
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
}