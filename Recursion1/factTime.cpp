#include<iostream>
using namespace std;
void fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }

}
int main(){
    fact(5);
}