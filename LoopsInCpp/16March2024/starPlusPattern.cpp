// PRINT THE STAR PLUS PATTERN (N=ODD)

#include<iostream>
using namespace std;
int main(){
    int n,mid,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    mid=(n/2+1);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==mid || j==mid){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
