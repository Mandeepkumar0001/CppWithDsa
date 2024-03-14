//Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    int a=10,b=20,c=30;
    if(a>b && a>c){
        cout<<"a is largest"<<endl;
    }else if(b>c && b>c){
        cout<<"b is largest"<<endl;
    }else if(c>a && c>a){
        cout<<"c is largest"<<endl;
    }
    return 0;
}