#include<iostream>
using namespace std;
void fact(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    fact(sum+n,n-1);
}
int main(){
    fact(0,5);
}