/////////////////////////////////////
/*Input: enter a no. -89
*Output: -89 is negative
*Description:Check whether the number is positive negative or zero
*Date:6-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int no;
cout<<"enter a no. ";
cin>>no;
if(no>0)
{
cout<<no<<" is postive";
}
else if(no<0)
{
cout<<no<<" is negative";
}
else
{
cout<<no<<" is equal to zero";
}
}

