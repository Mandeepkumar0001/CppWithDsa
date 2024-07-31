#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int count=0;
    int n= str.size();
    int mid=n/2;
    for(int i=0;i<mid;i++){
        if(str[i]==str[n-i-1]) count++;
    }
    if(count==mid) cout<<"strings are palindrome "; 
    else cout<<"strings are not palindrome: ";
}