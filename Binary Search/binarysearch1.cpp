#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int lo=0;
    int hi=nums.size()-1;
    int mid=(lo+(hi-lo)/2);
    while(lo<=hi){
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
        mid=(lo+(hi-lo)/2);
    }
    return -1;
}
int main(){
    vector<int> k={4,5,8,11,12,15};
    int mk=search(k,11);
    cout<<mk;
}