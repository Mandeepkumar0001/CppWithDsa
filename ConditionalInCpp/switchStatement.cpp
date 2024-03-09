#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"Press 1 for + "<<endl;
    cout<<"Press 2 for - "<<endl;
    cout<<"Press 3 for * "<<endl;
    cout<<"Press 4 for / "<<endl;
    int n;
    cin>>n;
    switch(n){
        case 1:
            cout<<"a+b ="<<a+b<<endl;
            break;
        case 2:
            cout<<"a-b ="<<a-b<<endl;
            break;
        case 2:
            cout<<"a*b ="<<a*b<<endl;
            break;
        case 2:
            cout<<"a/b ="<<a/b<<endl;
            break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}
