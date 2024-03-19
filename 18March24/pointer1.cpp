// Write a program to find the sum of two numbers using pointers

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    int *ptr=&a;
    int *ptr1=&b;
    int c;
    int *result=&c;
    *result=*ptr + *ptr1;
    cout<<"Sum of two number is: "<<*result<<endl;
    return 0;
}