// Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array].
#include<iostream>
using namespace std;
int main(){
    int arr[5]={40,15,30,25,85};
    for(int i=0;i<5;i++){
        if(arr[i]<35){
            cout<<i<<" ";
            
        }
    }
}