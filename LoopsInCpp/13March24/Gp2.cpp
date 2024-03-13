// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int i,n,terms=3;
    cout<<"enter the terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<terms<<endl;
        terms *=4;
    }
    return 0;
}