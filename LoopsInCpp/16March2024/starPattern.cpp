/*

Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*

*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(i=(n-1);i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        if(i==0)
        break;
    }
    return 0;
}