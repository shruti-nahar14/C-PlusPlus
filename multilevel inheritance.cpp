/////////////////////////////////////
/*Input:--
*Output:roll no is 101
subjects are Social science
maths
English
science
marks are 40
50
36
54
total is 180
*Description:Multilevel Inheritance to find the total marks of subjects 
*Date:15-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class stu
{
protected:
int roll;
public:
void getroll(int x)
{
roll=x;
}
void disp(void)
{
cout<<"roll no is "<<roll<<"\n";
}
};
class test:public stu
{
protected:
string sub1,sub2,sub3,sub4;
int m1,m2,m3,m4;
public:
void display(void)
{
cout<<"subjects are ";
cin>>sub1>>sub2>>sub3>>sub4;
cout<<"marks are ";
cin>>m1>>m2>>m3>>m4;
}
};
class result:public test
{
int total;
public:
void oper(void)
{
total=m1+m2+m3+m4;
}
void dispp(void)
{
cout<<"total marks are "<<total;
}
};
int main()
{
result obj;
obj.getroll(101);
obj.disp();
obj.display();
obj.oper();
obj.dispp();
}
