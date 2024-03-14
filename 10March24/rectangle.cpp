// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int l=5,b=6;
    int areaOfRactangle=(l*b);
    int perimeter=(2*(l+b));
    cout<<"Area of Ractangle = "<< areaOfRactangle<<endl;
    cout<<"Perimeter of Ractangle = "<< perimeter<<endl;
    if(areaOfRactangle>perimeter){
        cout<<"the area of the rectangle is greater than its perimeter"<<endl;
    }
    return 0;
}