/* Write a program to print the transpose of 
the matrix entered by the user and store it in a new 
matrix. */

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of array"<<endl;
    cin>>m>>n;
    cout<<"enter elements of array"<<endl;
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"original array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose array"<<endl;
    int B[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/* OUTPUT 
enter the size of array
3
3
enter elements of array
1
2
3
4
5
6
7
8
9
original array
1 2 3
4 5 6
7 8 9
transpose array
1 4 7
2 5 8
3 6 9

*/
