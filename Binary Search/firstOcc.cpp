#include<iostream>
#include<vector>
using namespace std;
int firstoccurance(vector<int>& v, int key) {
    int lo=0,ans;
    int hi=v.size()-1;
    int mid=(lo+(hi-lo)/2);
    while(lo<=hi){
        if(v[mid]==key){
            ans=mid;
            hi=mid-1;
        }else if(v[mid]>key){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
        mid=(lo+(hi-lo)/2);
    }
    return ans;
}
int main(){
    vector<int> k={4,5,11,12,12,15};
    int mk=firstoccurance(k,11);
    cout<<mk;
}