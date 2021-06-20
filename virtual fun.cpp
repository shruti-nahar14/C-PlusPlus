/////////////////////////////////////
/*Input:--
*Output:base class disp
        base class show
        derived class disp
        derived class show
*Description:Implementation of virtual function concept
*Date:20-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
class base
{
public:
virtual void disp()
{
cout<<"base class disp \n";
}
virtual void show()
{
cout<<"base class show\n";
}
};
class derived:public base
{
public:
void disp()
{
cout<<"derived class disp\n";
}
void show()
{
cout<<"derived class show";
}
};
int main()
{
base *p;
base obj;
p=&obj;
p->disp();
p->show();
derived obj2;
p=&obj2;
p->disp();
p->show();
}
