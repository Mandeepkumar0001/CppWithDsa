/*
1
1 2
1 2 3
1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
    int n=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n +=1;
        }
        n=1;
        cout<<endl;
    }
    return 0;
}