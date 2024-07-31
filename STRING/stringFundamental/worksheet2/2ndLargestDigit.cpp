#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="102378564";
    char l=str[0],sl='0';
    for(int j=0;j<str.length();j++){
        if(l<str[j]){
            sl=l;
            l=str[j];
        }else if(str[j]>sl && str[j] !=l){
            sl=str[j];
        }
    }
    cout<<sl;
}