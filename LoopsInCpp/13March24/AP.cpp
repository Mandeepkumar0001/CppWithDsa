// Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int i,n,terms=1;
    cout<<"enter the terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<terms<<endl;
        terms +=2;
    }
    return 0;
}