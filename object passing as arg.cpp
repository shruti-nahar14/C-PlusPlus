/////////////////////////////////////
/*Input:--
*Output:hours = 3
        minutes = 45
        hours = 4
        minutes = 30
        hours = 8
        minutes = 15
*Description:Object Passing as Argument
*Date:19-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////

#include <iostream>
using namespace std;
class tim
{
int h,m;
public:
void getval(int x,int y)
{
h=x;
m=y;
}
public:
void putval(void)
{
cout<<"hours = "<<h<<"\n";
cout<<"minutes = "<<m<<"\n";
}
public:
void sum(tim t1,tim t2)
{
m=t1.m+t2.m;
h=m/60;
m=m%60;
h=h+t1.h+t2.h;
}
};
int main()
{
tim t1,t2,t3;
t1.getval(3,45);
t2.getval(4,30);
t3.sum(t1,t2);
t1.putval();
t2.putval();
t3.putval();
}
