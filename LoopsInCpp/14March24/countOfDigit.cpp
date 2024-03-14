// WAP to count digits of a given number

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"total digit: "<<count<<endl;
    return 0;
}