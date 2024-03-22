// Count the number of elements in given array greater than a given number x.


#include<iostream>
using namespace std;
int main(){
    int m[]={1,5,8,7,9,10};
    int count=0,x=9;
    int size=sizeof(m)/sizeof(m[0]);
    for(int i=0;i<size;i++){
        if(m[i]>x){
            count +=1;
        }
    }
    cout<<"total number greater than "<<x <<" are "<<count;
    return 0;
}