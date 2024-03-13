// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int i,n,terms=4;
    cout<<"enter the terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<terms<<endl;
        terms +=3;
    }
    return 0;
}