#include<iostream>
using namespace std;
int main(){
    int arr[]={10,55,55,170,10};
    int Fl=arr[0];
    int Sl=0;
    int Tl=0;
    for(int i=0;i<5;i++){ 
        if(Fl<arr[i]){
            Tl=Sl;
            Sl=Fl;
            Fl=arr[i];
        }else if(Sl<arr[i] && arr[i]<Fl){
            Tl=Sl;
            Sl=arr[i];
        }else if(Tl<arr[i] && arr[i]<Sl){
            Tl=arr[i];
        }
    }
    cout<<Tl;
}