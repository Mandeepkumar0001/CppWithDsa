// Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
int circle(int r){
    float A;
    A=3.14*r;
    cout<<"Area of circle is: "<<A;
}
int main(){
    int r;
    cout<<"enter the radious of circle "<<endl;
    cin>>r;
    circle(r);
    return 0;
}