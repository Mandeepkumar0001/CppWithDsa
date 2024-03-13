// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n 

#include<iostream>
using namespace std;
int main(){
    int i,n,terms=1;
    cout<<"enter the terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<terms<<endl;
        terms *=2;
    }
    return 0;
}