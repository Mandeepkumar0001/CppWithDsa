// Write a program to check whether a character is an alphabet or not.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"This is an alphabet"<<endl;
    }else{
        cout<<"This is not an alphabet"<<endl;
    }
    return 0;
}