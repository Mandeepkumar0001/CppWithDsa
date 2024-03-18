// Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
int odd(int a,int b){
    cout<<"all odd number between "<<a<<" and"<< b<<" are"<<endl;
    for(int i=a;i<=b;i++){
        if(i%2 !=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    odd(a,b);
    return 0;
}