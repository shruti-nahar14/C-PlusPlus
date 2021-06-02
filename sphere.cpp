/////////////////////////////////////
*Input: 8
*Output: Area of Sphere is 803
 Volume of Sphere is 2138
*Description:Find Area & Volume of Sphere
*Date: 2-June-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int area,r,volume;
cout<<"enter a radius of sphere ";
cin>>r;
area=4*3.14*r*r;
volume=1.33*3.14*r*r*r;
cout<<"Area of Sphere is "<<area;
cout<<"\nVolume of Sphere is "<<volume;
return 0;
}
