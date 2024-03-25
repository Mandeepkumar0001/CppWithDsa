// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int m[]={10,5,7,45,12,78};
    int size=sizeof(m)/sizeof(m[0]);
    int max=m[0];
    for(int i=1;i<size;i++){
        if(m[i]>max){
            max=m[i];
        }
    }
    cout<<max;
    return 0;
}