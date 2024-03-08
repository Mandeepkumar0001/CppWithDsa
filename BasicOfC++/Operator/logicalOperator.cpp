#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    cout<<(a>=b && b>=a)<<endl; // 0 yani false
    cout<<(a>=b || b>=a)<<endl; // 1 yani true
    return 0;
}