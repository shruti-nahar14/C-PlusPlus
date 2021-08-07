/////////////////////////////////////
/*Input: enter a lenght 10
         enter a width 36
*Output: area of rectangle is 360
         perimeter of rectangle is 92
*Description:find the area and perimeter of rectangle 
*Date:7-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int len,wid,area,perimeter;
cout<<"enter a lenght ";
cin>>len;
cout<<"enter a width ";
cin>>wid;
area=len*wid;
cout<<"area of rectangle is "<<area<<"\n";
perimeter=2*(len+wid);
cout<<"perimeter of rectangle is "<<perimeter;
}
