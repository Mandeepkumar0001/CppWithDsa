#include<iostream>
using namespace std;
void gun(){
    // return;
    cout<<"mandeep ";
    // return;
    // gun();

}
void fun(){
    cout<<"kumar ";
    gun();
}
int main(){
    gun();
    fun();
}