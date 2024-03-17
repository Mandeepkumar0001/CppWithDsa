/*
Print the following pattern
Input: n = 5
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    char ch='A';
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                cout<<ch<<" ";
                ch +=1;
            }
        }else{
            for(j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
        ch='A';
    }
    return 0;
}