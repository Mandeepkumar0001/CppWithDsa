//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not

#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the radious of circle"<<endl;
    cin>>r;
    int Area=(3.14*r*r);
    cout<<"Area of circle is = "<< Area<<endl;
    int  circumference=(2*3.14*r);
    cout<<"circumference of circle is = "<< circumference<<endl;
    if(Area==circumference){
        cout<<"The area of circle and circumference are equal"<<endl;
    }if(Area>circumference){
        cout<<"The area of circle is greater than circumference"<<endl;
    }if(Area<circumference){
        cout<<"The area of circle is smaller than circumference"<<endl;
    }
    return 0;
}