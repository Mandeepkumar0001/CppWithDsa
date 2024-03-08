#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    cout<<(a&b)<<endl; // 0
    cout<<(a|b)<<endl; // 3
    cout<<(a^b)<<endl; // 3
    cout<<(a<<b)<<endl; // 4
    cout<<(a>>b)<<endl; // 0
    cout<<~(a)<<endl; // -2
    return 0;
}