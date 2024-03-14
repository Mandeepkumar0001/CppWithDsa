// WAP to print reverse of a given number. 

#include<iostream>
using namespace std;
int main(){
    int n,r,reverse=0;
    cout<<"enter any number"<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return 0;
}