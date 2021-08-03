//////////////////////////////////////
/*Input:--
*Output:value of b is 10
        by casting access derived class member
        value of d 70
*Description:Pointer to derived class
*Date:3-August-2021
*Author name:Shruti Nahar*/
/////////////////////////////////////
#include <iostream>
using namespace std;
class base
{
protected:
int b;
public:
void setb(int x)
{
b=x;
}
public:
void disp()
{
cout<<"value of b is "<<b<<"\n";
}
};
class derived:public base
{
int d;
public:
void setd(int y)
{
d=y;
}
public:
void disp()
{
cout<<"value of d "<<d;
}
};
int main()
{
base *p;
base obj;
p=&obj;
p->setb(10);
p->disp();
derived obj2;
p=&obj2;
cout<<"by casting access derived class member\n";
((derived*)p)->setd(70);
((derived*)p)->disp();
}
