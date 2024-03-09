// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter

// #include<iostream>
// using namespace std;
// int main(){
//     int l=5,b=6;
//     int areaOfRactangle=(l*b);
//     int perimeter=(2*(l+b));
//     cout<<"Area of Ractangle = "<< areaOfRactangle<<endl;
//     cout<<"Perimeter of Ractangle = "<< perimeter<<endl;
//     if(areaOfRactangle>perimeter){
//         cout<<"the area of the rectangle is greater than its perimeter"<<endl;
//     }
//     return 0;
// }

// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

// #include<iostream>
// using namespace std;
// int main(){
//     int s1,s2,s3;
//     cout<<"enter the value of s1"<<endl;
//     cin>>s1;
//     cout<<"enter the value of s2"<<endl;
//     cin>>s2;
//     cout<<"enter the value of s3"<<endl;
//     cin>>s3;
//     if(s1==s2 && s1==s3){
//         cout<<"the triangle is equilateral"<<endl;
//     }else if(s1==s2 || s2==s3 ||s3==s1){
//         cout<<"the triangle is isosceles"<<endl;
//     }else{
//         cout<<"the triangle is scalene"<<endl;
//     }
//     return 0;
// }

// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter the value of x"<<endl;
//     cin>>x;
//     cout<<"enter the value of y"<<endl;
//     cin>>y;
//     if(x==0 && y!=0){
//         cout<<"it lies on the y-axis"<<endl;
//     }else if(x!=0 && y==0){
//         cout<<"it lies on the x-axis"<<endl;
//     }else if(x==0 && y==0){
//         cout<<"It lies at the origin"<<endl;
//     }else{
//         cout<<"It neither lie on x-axis nor on y-axis"<<endl;
//     }
//     return 0;
// }

// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
// #include<iostream>
// using namespace std;
// int main(){
//     int x1,y1,x2,y2,x3,y3;
//     cout<<"Enter the value of (x1,y1)"<<endl;
//     cin>>x1>>y1;
//     cout<<"Enter the value of (x2,y2)"<<endl;
//     cin>>x2>>y2;
//     cout<<"Enter the value of (x3,y3)"<<endl;
//     cin>>x3>>y3;
//     int AB=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//     int BC=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
//     int AC=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
//     if((AC*AC)==((AB*AB)+(BC*BC))){
//         cout<<"all the three points fall on one straight line"<<endl;
//     }else{
//         cout<<"all the three points are not fall on one straight line"<<endl;
//     }
//     return 0;
// }

