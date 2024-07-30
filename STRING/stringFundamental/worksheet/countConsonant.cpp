#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int count=0;
    int n= str.size();
    for(int i=0;i<n;i++){
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') && ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
        {
            count++;
        }
    }
    cout<<"Total numbers of consonats are: "<<count;
}