// Q5. Predict the output :
#include<iostream>
using namespace std;
int main(){
float a = 5, b = 2; 
int c; 
c = a % b; // error: invalid operands of types 'float' and 'float' to binary 'operator%'
cout<<c;
return 0;
}