// Print the nth fibonacci number
#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"enter terms"<<endl;
    cin>>terms;
    int n=0,n1=1,nt;
    nt=n+n1;
    cout<<n<<" "<<n1<<" ";
    for(int i=3;i<=terms;i++){
        cout<<nt<<" ";
        n=n1;
        n1=nt;
        nt=n+n1;
    }
    return 0;
}