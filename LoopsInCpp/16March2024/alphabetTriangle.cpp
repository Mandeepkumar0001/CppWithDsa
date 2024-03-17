/*
Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D
*/

#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int i,j,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch +=1;
        }
        cout<<endl;
        ch='A';
    }
    return 0;
}