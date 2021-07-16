//////////////////////////////////
/*Input:Enter the three sides of triangle
10
20
20
*Output:Triangle is isosceles
*Description:Check type of triangle (Equilateral/ isosceles /scalene)
*Author: Shruti Nahar
*Date: 16-july-2021*/
//////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int sidea,sideb,sidec;
cout<<"Enter the three sides of triangle ";
cin>>sidea>>sideb>>sidec;
if(sidea==sideb && sideb==sidea)
{
cout<<"\n Triangle is Equaliteral ";
}
else if(sidea==sideb || sideb==sidec || sidea==sidec)
{
cout<<"\n Triangle is isosceles ";
}
else 
{
cout<<"\n Triangle is scalene ";
}
}
