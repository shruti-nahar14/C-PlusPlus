/////////////////////////////////////
/*Input:--
*Output:value of A 10
        value of B 20
        value of C 30
        value of A 11
        value of B 21
        value of C 31
*Description:Use of Unary Operator
*Date:19-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int a,b,c;
public:
void getdata(int x,int y,int z)
{
a=x;
b=y;
c=z;
}
public:
void operator ++()
{
a=++a;
b=++b;
c=++c;
}
public:
void disp(void)
{
cout<<"value of A "<<a<<"\n";
cout<<"value of B "<<b<<"\n";
cout<<"value of C "<<c<<"\n";
}
};
int main()
{
test obj;
obj.getdata(10,20,30);
obj.disp();
++ obj;
obj.disp();
}
