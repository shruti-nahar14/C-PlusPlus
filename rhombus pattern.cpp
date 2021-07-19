///////////////////////////////////
/*Input:5
*Output: 
        *  *  *  *  *
       *  *  *  *  *
     *  *  *  *  *
   *  *  *  *  *
 *  *  *  *  *
*Description: Rhombus pattern
*Date:19-July-2021
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
for(int j=1;j<=n-i;j++)
{
cout<<"  ";
}
for(int k=1;k<=n;k++)
{
cout<<" * ";
}
cout<<"\n";
}
}
