//////////////////////////////////////////
/*Input:--
*Output:enter a radius 10
        area of cricle 314
        -------------------
        enter of x 20
        enter of y 30
        area of triangle is 600
        ----------------------
        enter a value of a 4
        enter a value of b 5
        area of rectangle 10
*Description:Display the area of circel,triangle & rectangle
*Date:23-June-2021
*Author name:Shruti Nahar
*/
#include <iostream>
using namespace std;
int main()
{
int r,area;
cout<<"enter a radius";
cin>>r;
area=3.14*r*r;
cout<<"area of cricle"<<area<<"\n";
int x,y,triangle;
cout<<"enter of x";
cin>>x;
cout<<"enter of y";
cin>>y;
triangle=x*y;
cout<<"area of triangle is"<<triangle<<"\n";
int a,b,rect;
cout<<"enter a value of a";
cin>>a;
cout<<"enter a value of b";
cin>>b;
rect=0.5*a*b;
cout<<"area of rectangle"<<rect<<"\n";
return 0;
}
