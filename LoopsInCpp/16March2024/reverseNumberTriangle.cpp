/*
1 2 3 4
1 2 3
1 2 
1
*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=n;i<=n;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
        if(i==0)
        break;
    }
    return 0;
}