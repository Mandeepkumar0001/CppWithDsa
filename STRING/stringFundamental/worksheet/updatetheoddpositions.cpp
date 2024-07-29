#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"After changing"<<endl;
    int n= str.size();
    for(int i=0;i<n;i++){
        if(i%2 !=0){
            str[i]='#';
        }
    }
    cout<<str;
}