////////////////////////////////////
/*Input:5
*Output: 
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*Description: Floyd's pattern
*Date:19-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int row,n=1;
cout<<"Enter the no of row ";
cin>>row;
for(int i=1;i<=row ;i++)
{
for(int j=1;j<=i;j++)
{
  cout<<n<<" ";
  n++;
}
cout<<"\n";
}
}
