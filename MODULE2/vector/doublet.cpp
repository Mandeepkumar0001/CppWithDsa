// Find the doublet in the Array whose sum is equal to the given value x (LEETCODE TWO SUM)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,5,4,3,6};
    int target=7,pairs=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target){
                pairs++;
            }
        }
    }
    cout<<"doublet is: "<<pairs;
    return 0;
}