/////////////////////////////////////
/*Input:--
*Output:A class constructor is intialized
        B class constructor is intialized
        C class constructor is intialized
        value of A 10
        value of B 20
        value of c 30
*Description:Use of Constructor in dervied class
*Date: 10-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class A
{
    protected:
int a;
public:
A(int x)
{
a=x;
cout<<"A class constructor is intialized \n";
}
void disp()
{
cout<<"value of A "<<a<<"\n";
}
};
class B
{
    protected:
int b;
public:
B(int y)
{
b=y;
cout<<"B class constructor is intialized \n";
}
void dispb()
{
cout<<"value of B "<<b<<"\n";
}
};
class C:public A,public B
{
int c;
public:
C(int x,int y):A(x),B(y),c(x+y)
{
cout<<"C class constructor is intialized \n";
}
public:
void dispc()
{
cout<<"value of c "<<c<<"\n";
}
};
int main()
{
C obj(10,20);
obj.disp();
obj.dispb();
obj.dispc();
}
