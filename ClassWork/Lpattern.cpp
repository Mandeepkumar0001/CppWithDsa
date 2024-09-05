#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        if(i==4){
            for(int j=0;j<4;j++){
                cout<<"*"<<" ";
            }
        }
        cout<<"*"<<endl;
    }
}