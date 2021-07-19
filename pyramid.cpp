///////////////////////////////////
/*Input:5
*Output: 
         *
       * *
     * * *
   * * * *
 * * * * *
*Description: Half pyramid after 180 rotation
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
for(int j=1;j<=n;j++)
{
if(j<=n-i)
{
cout<<"  ";
}
else
{
cout<<" *";
}
}
cout<<"\n";
}
}

