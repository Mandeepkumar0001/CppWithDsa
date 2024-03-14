// Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n>=100 || n<=999){
        cout<<"It is a three digit number"<<endl;
    }else{
        cout<<"it is not a three digit number"<<endl;
    }
    return 0;
}    