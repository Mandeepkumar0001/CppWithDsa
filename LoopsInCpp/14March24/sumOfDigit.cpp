// WAP to print sum of digits of a given number. 

#include<iostream>
using namespace std;
int main(){
    int n,r,sod=0;
    cout<<"enter any number"<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        sod +=r;
        n /=10;
    }
    cout<<"sum of digit is = "<< soed<<endl;
    return 0;
}