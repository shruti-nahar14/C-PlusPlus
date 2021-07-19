////////////////////////////////////
/*Input:5
*Output: 
        * * * * *
        *       *
        *       *
        *       *
        * * * * *
*Description: Hollow rectangle pattern
*Date:19-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int row, col;
cout<<"Enter the no of row ";
cin>>row;
cout<<"Enter the no of column ";
cin>>col;
for(int i=1;i<=row ;i++)
{
for(int j=1;j<=col;j++)
{
if(i==1 || i==row || j==1 || j==col)
{
cout<<"* ";
}
else
{
cout<<"  ";
}
}
cout<<"\n";
}
}
