// Display this AP - 100,97,94,..upto all terms which are positive. N 

#include<iostream>
using namespace std;
int main(){
    int i,n,terms=100;
    cout<<"enter the terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(terms>=0){
            cout<<terms<<endl;
            terms -=3;
        }
    }
    return 0;
}