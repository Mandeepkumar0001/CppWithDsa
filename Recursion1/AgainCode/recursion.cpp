#include<iostream>
using namespace std;
void num(int n){
    if(n==0)
        return;
    cout<<"mandeep "<<endl;
    num(n-1);
}
int main(){
    int n;
    cout<<"enter a value of n"<<endl;
    cin>>n;
    num(n);
}