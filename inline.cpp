/////////////////////////////////////
/*Input: 3
*Output:cube is 27
*Description:Find the cube using Inline Function
*Date:15-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
inline cub(int x)
{
return x*x*x ;
}
int main()
{
int no;
cout<<"enter a no ";
cin>>no;
cout<<"cube is "<<cub(no);
}
