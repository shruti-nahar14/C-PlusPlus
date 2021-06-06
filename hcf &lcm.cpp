/////////////////////////////////////
/*Input: 10
          3
*Output:hcf is 1
        lcm is 30
*Description:Find the HCF and LCM
*Date: 6-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
int x,y,n1,n2,hcf;
public:
void val(void)
{
cout<<"enter a val of x ";
cin>>n1;
cout<<"enter a val of y ";
cin>>n2;
x=n1;
y=n2;
}
public:
void oper()
{
while(n1!=n2)
{
if(n1>n2)
{
n1=n1-n2;
}
else
{
n2=n2-n1;
}
}
cout<<"hcf is "<<n1<<"\n";
}
};
class B: public A
{
int lcm;
public:
void disp()
{
hcf=n1;
lcm=(x*y)/hcf;
cout<<"lcm is "<<lcm;
}
};
int main()
{
B obj;
obj.val();
obj.oper();
obj.disp();
getch();
}
