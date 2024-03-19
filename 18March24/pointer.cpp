// Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a & b"<<endl;
    cin>>a>>b;
    int *ptr=&a;
    int *ptr1=&b;
    int c;
    int *result = &c;
    *result = *ptr * *ptr1;
    cout<<"product of two number is: "<<c<<endl;
    return 0;
}