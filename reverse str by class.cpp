/////////////////////////////////////
/*Input: enter a string shruti
*Output: reversed string is iturhs
*Description:Reserve the string using iteration
*Date:7-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
#include<string.h>
using namespace std;
class str
{
public:
char arr[10];
public:
int i;
int len;
public:
void fun(void)
{
cout<<"enter a string ";
cin>>arr;
}
public:
void reversed(void)
{
len=strlen(arr);
cout<<"reversed string is ";
for(i=len-1;i>=0;i--)
{
cout<<arr[i];
}
}
};
int main()
{
str obj;
obj.fun();
obj.reversed();
}
