/////////////////////////////////////
*Input: 15
*Output: 15 is divisible by 5 and 3
*Description:check the no is divible by 5,3 or by both:-else if statement
*Date: 31-may-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include <stdio.h>
int main()
{
int no;
printf("enter a no");
scanf("%d",&no);
if((no%5==0) && (no%3==0))
{
printf("%d is divisible by 5 and 3",no);
}
else if(no%5==0)
{
printf("%d is divisible by 5",no);
}
else if(no%3==0)
{
printf("%d is divisible by 3",no);
}
else
{
printf("not divisible");
}
}
