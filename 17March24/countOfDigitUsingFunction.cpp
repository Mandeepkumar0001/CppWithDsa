// Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;
int digitCount(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout<<"total digits are: "<<count<<endl;
    cout<<"Square of digits are: "<<(count*count)<<endl;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    digitCount(n);
    return 0;
}