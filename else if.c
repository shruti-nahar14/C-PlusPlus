/////////////////////////////////////
*Input: 1
*Output: 10
Area of circle is 314
*Description:Enter the choice if choice 1 then find area of circle,
if choice 2 then find area of triangle
if choice 3 then find area of rectangle :-by else if statement
*Date: 31-may-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
float r,b,h,l,br;
float ca,ta,ra;
int ch;
printf("enter the choice");
scanf("%d",&ch);
if(ch==1)
{
printf("enter the radius\n");
scanf("%f",&r);
ca=3.14*r*r;
printf("Area of circle is %.2f \n",ca);
}
else if(ch==2)
{
printf("enter the base and height");
scanf("%f %f",&b,&h);
ta=0.5*b*h;
printf("Area of triangle is %.2f \n",ta);
}
else if(ch==3)
{
printf("enter the lenght and breath");
scanf("%f %f",&l,&br);
ra=l*br;
printf("Area of rectangle is %.2f",ra);
}
else
{
printf("invalid output");
}
}
