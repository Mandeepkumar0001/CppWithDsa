#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &arr){
    int mid=arr.size()/2;
    int size=arr.size();
    int count=0;
    for(int i=0;i<mid;i++){
        if(arr[i]==arr[size-1-i]){
            count++;
        }
    }
    if(count==mid){
        cout<<"this array is a palindrome";
    } else {
        cout<<"this array is not palindrome";
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);
    display(v);
}
