/////////////////////////////////////
/*Input: 10000
*Output:bonus is1000
        salary is11000
*Description:If salary >10000 then inc bonus by 10%
*Date: 5-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int sal,b;
cout<<"enter a salary";
cin>>sal;
if(sal<=10000)
{
b=(sal*10)/100;
cout<<"bonus is"<<b<<"\n";
sal=sal+b;
cout<<"salary is"<<sal;
}
}
