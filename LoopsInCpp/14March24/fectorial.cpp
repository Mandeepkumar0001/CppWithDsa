// Print the factorial of a given number ‘n’

#include<iostream>
using namespace std;
int main(){
    int n,i,f=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=n;i>=1;i--){
        f=f*i;
    }
    cout<<"Fectorial is: "<<f<<endl;
    return 0;
}