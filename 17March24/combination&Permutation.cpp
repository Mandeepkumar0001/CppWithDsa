#include<iostream>
using namespace std;
int calculate(int n,int r){
    int x=(n-r);
    int f=1,i;
    for(i=n;i>=1;i--){
        f=f*i;
    }
    int f1=1;
    for(i=x;i>=1;i--){
        f1=f1*x;
    }
    int f2=1;
    for(i=r;i>=1;i--){
        f2=f2*i;
    }
    int permutation=(f/f1);
    cout<<"permutation is: "<<permutation<<endl;
    int combination=f/(f2*f1);
    cout<<"combination is: "<<combination<<endl;
}
int main(){
    int n,r;
    cout<<"enter the value of n & r"<<endl;
    cin>>n>>r;
    calculate(n,r);
    return 0;
}