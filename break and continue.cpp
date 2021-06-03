/////////////////////////////////////
/*Input: 0
*Output: 0 1 2 4 5 6 7 8
*Description:Using Break And Continue
*Date: 3-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int i;
for(i=0;i<=10;i++)
{
if(i==3)
{
continue;
}
if(i==9)
{
break;
}
cout<<i<<"\n";
}
}
