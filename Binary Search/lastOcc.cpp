#include<iostream>
#include<vector>
using namespace std;
int lastoccurance(vector<int>& v, int key) {
    int lo=0,ans;
    int hi=v.size()-1;
    int mid=(lo+(hi-lo)/2);
    while(lo<=hi){
        if(v[mid]==key){
            ans=mid;
            lo=mid+1;
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
    int mk=lastoccurance(k,12);
    cout<<mk;
}