/////////////////////////////////////
/*Input: enter a 1st binary no4
         enter a 2nd binary no5
*Output: addition is 41
*Description:Display the addition of two binary number
*Date:7-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int bin1,bin2,temp1,temp2,ma,mi,mid,sum=0,carry=0,po=1;
cout<<"enter a 1st binary no";
cin>>bin1;
cout<<"enter a 2nd binary no";
cin>>bin2;
if(bin1>bin2)
{
ma=bin1;
mi=bin2;
}
else
{
ma=bin2;
mi=bin1;
}
while(ma>0)
{
temp1=ma%10;
ma=ma/10;
temp2=mi%10;
mi=mi%10;
mid=(temp1+temp2+carry)%2;
carry=(temp1+temp2+carry)/2;
sum=po*mid+sum;
po=po*10;
if(ma==0 && carry>0)
{
sum=sum+po*carry;
}
}
cout<<"addition is "<<sum;
}
