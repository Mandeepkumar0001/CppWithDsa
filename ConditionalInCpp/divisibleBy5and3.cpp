// Take positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"It is a divisible by 5 and 3"<<endl;
    }else{
        cout<<"it is not divisible by 5 and 3"<<endl;
    }
    return 0;
}