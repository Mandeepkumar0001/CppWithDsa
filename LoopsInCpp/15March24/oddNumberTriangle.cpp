#include<iostream>
using namespace std;
int main(){
    int o=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i*2; j +=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}