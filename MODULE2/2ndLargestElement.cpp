// Find the second largest element in the given Array.

#include<iostream>
using namespace std;
int main(){
    int m[]={12,20,50,87,54};
    int size=sizeof(m)/sizeof(m[0]);
    int l=m[0];
    int sl;
    for(int i=0;i<size;i++){
        if(m[i]>l){
            sl=l;
            l=m[i];
        }else if(m[i]>sl && m[i] !=l){
            sl=m[i];
        }
    }
    cout<<"2nd largest is: "<<sl;
    return 0;
}