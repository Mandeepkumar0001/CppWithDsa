#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int n= str.size();
    reverse(str.begin()+n/2 ,str.end());
    cout<<str;
}