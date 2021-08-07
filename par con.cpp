/////////////////////////////////////
/*Input: --
*Output: value of rem 0
         value of qou 2
*Description:use of parametric constructor to find reminder and quotient
*Date:7-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int dividend,divisor,rem,qou;
public:
test (int d,int i)
{
dividend=d;
divisor=i;
}
void oper(void)
{
rem=dividend%divisor;
qou=dividend/divisor;
}
void disp(void)
{
cout<<"value of rem "<<rem<<"\n";
cout<<"value of qou "<<qou<<"\n";
}
};
int main()
{
test t(20,10);
t.oper();
t.disp();
}
