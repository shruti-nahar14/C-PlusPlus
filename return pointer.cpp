/////////////////////////////////////
/*Function:int *show();
*Input: enter a value of p 10
*Output:value= 10
*Description:Use of pointer as return type 
*Date: 22-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int *show()
{
static int p;
cout<<"enter a value of p ";;
cin>>p;
return &p;
}
int main()
{
int *x;
x=show();
cout<<" value= ";
cout<<*x;
}
