#include<iostream>
using namespace std;
int fec(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    cout<<fec(5);
}