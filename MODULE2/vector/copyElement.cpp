// Write a program to copy the contents of one array into another in the reverse order. 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,5,3,8,9};
    vector<int> n;
    cout<<"Before reverse"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=v.size()-1 ; i>=0;i--){
        n.push_back(v[i]);
    }
    cout<<"After reverse"<<endl;
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    return 0;
}


/* OUTPUT 

Before reverse
2 5 3 8 9 
After reverse
9 8 3 5 2 


*/