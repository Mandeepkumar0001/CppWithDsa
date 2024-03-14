// WAP to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n,r,soed=0;
    cout<<"enter any number"<<endl;
    cin>>n;
    while(n>0){
        r=n%10;
        if(r%2==0){
            soed +=r;
        }
        n /=10;
    }
    cout<<"sum of even digit in this number is = "<< soed<<endl;
    return 0;
}