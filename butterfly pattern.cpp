/////////////////////////////////////
/*Input:5
*Output:
 *                 *
 * *             * *
 * * *         * * *
 * * * *     * * * *
 * * * * * * * * * *
 * * * * * * * * * *
 * * * *     * * * *
 * * *         * * *
 * *             * *
 *                 *

*Description:Implementation of Butterfly Pattern
*Date:20-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the value ";
cin>>n;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
cout<<" *";
}
int space= 2*n-2*i;
for(int j=1;j<=space;j++)
{
cout<<"  ";
}
for(int j=1;j<=i;j++)
{
cout<<" *";
}
cout<<"\n";
}
for(int i=n;i>=1;i--)
{
for(int j=1;j<=i;j++)
{
cout<<" *";
}
int space= 2*n-2*i;
for(int j=1;j<=space;j++)
{
cout<<"  ";
}
for(int j=1;j<=i;j++)
{
cout<<" *";
}
cout<<"\n";
}
}
