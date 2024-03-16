/*
A
A B
A B C 
A B C D
*/

#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<ch<<" ";
            ch +=1;
        }
        cout<<endl;
        ch='A';
    }
    return 0;
}

