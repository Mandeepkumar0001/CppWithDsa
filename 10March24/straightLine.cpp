// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the value of (x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the value of (x2,y2)"<<endl;
    cin>>x2>>y2;
    cout<<"Enter the value of (x3,y3)"<<endl;
    cin>>x3>>y3;
    int AB=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    int BC=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    int AC=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    if((AC*AC)==((AB*AB)+(BC*BC))){
        cout<<"all the three points fall on one straight line"<<endl;
    }else{
        cout<<"all the three points are not fall on one straight line"<<endl;
    }
    return 0;
}