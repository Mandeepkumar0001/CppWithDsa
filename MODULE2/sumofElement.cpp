// Calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int m[]={1,5,8,7,9,10};
    int sum=0;
    int size=sizeof(m)/sizeof(m[0]);
    for(int i=0;i<size;i++){
        sum +=m[i];
    }
    cout<<"sum is: "<<sum;
    return 0;
}