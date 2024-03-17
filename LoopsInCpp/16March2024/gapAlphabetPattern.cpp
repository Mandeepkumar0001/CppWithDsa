/*
Print the following pattern
Input : n = 4
Output :
 A
 A B
 A B C
A B C D
*/

#include<iostream>
using namespace std;
int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=4;i++){
        if(i==4){
            for(j=1;j<=i;j++){
                cout<<ch<<" ";
                ch +=1;
            }
        }else{
            for(j=1;j<=i;j++){
                cout<<" "<<ch;
                ch +=1;
            }
        }
        cout<<endl;
        ch='A';
    }
    return 0;
}