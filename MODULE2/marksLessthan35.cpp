/* Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.] */

#include<iostream>
using namespace std;
int main(){
    int marks[]={40,20,50,30,34,80};
    int size=sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<size;i++){
        if(marks[i]<35){
            cout<<"Roll No. is: "<<i<<endl;
        }
    }
    return 0;
}