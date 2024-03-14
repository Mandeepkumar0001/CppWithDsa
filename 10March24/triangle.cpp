// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the value of s1"<<endl;
    cin>>s1;
    cout<<"enter the value of s2"<<endl;
    cin>>s2;
    cout<<"enter the value of s3"<<endl;
    cin>>s3;
    if(s1==s2 && s1==s3){
        cout<<"the triangle is equilateral"<<endl;
    }else if(s1==s2 || s2==s3 ||s3==s1){
        cout<<"the triangle is isosceles"<<endl;
    }else{
        cout<<"the triangle is scalene"<<endl;
    }
    return 0;
}