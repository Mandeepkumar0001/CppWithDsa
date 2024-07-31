#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int n= str.size();
    cout<<str;
    reverse(str.begin(),str.end());
    cout<<str;
}