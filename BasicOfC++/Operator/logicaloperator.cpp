#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    cout<<(a>=b && b>=a)<<endl; // 0 or false
    cout<<(a>=b || b>=a)<<endl; // 1 or true
    return 0;
}