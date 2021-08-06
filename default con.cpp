/////////////////////////////////////
/*Input: --
*Output: value of total 29
         value of average 7
*Description:Implementation of default constructor
*Date:6-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int a,b,c,d,totall,avg;
public:
test ()
{
a=7;
b=8;
c=9;
d=5;
}
void oper(void)
{
totall=a+b+c+d;
avg=(a+b+c+d)/4;
}
void disp(void)
{
cout<<"value of total "<<totall<<"\n";
cout<<"value of average "<<avg<<"\n";
}
};
int main()
{
test t;
t.oper();
t.disp();
}
