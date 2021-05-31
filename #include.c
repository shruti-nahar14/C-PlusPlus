/////////////////////////////////////
*Input: 153
*Output:Sum of digit is 9
*Description:Sum of digit
*Date: 31-may-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter a no");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    while(n!=0);
    printf("sum of digit is %d",sum);
}
