// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    if(x==0 && y!=0){
        cout<<"it lies on the y-axis"<<endl;
    }else if(x!=0 && y==0){
        cout<<"it lies on the x-axis"<<endl;
    }else if(x==0 && y==0){
        cout<<"It lies at the origin"<<endl;
    }else{
        cout<<"It neither lie on x-axis nor on y-axis"<<endl;
    }
    return 0;
}