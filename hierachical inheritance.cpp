/////////////////////////////////////
/*Input: enter a number 10
         enter a number 20
*Output: square is 100
         cube is 8000
*Description:Use of Hierachical Inheritance to find sqaure and cube
*Date: 13-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class A
{
protected:
int no;
public:
void disp()
{
cout<<"enter a number ";
cin>>no;
}
};
class B:public A
{
int sq;
public:
void disp1(void)
{
sq=no*no;
cout<<"square is "<<sq<<"\n";
}
};
class C:public A
{
int cub;
public:
void disp2(void)
{
cub=no*no*no;
cout<<"cube is "<<cub;
}
};
int main()
{
B obj1;
obj1.disp();
obj1.disp1();
C obj2;
obj2.disp();
obj2.disp2();
}
