// Given an integer Print the absolute value of that integer

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if(a>0){
        cout<<a<<endl;
    }else{
        cout<<(-a)<<endl;
    }
    return 0;
}