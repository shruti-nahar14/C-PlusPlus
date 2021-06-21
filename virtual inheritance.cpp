/////////////////////////////////////
/*Input:--
*Output:enter a roll no 101
        enter a student name shruti
        enter a marks 50
        enter a sports marks45
enter a roll no 102
enter a student name prachi
enter a marks 89
enter a sports marks56
*Description:Use of virtual in Inheritance to avoid Ambiguity
*Date:21-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////
#include <iostream>
using namespace std;
class stu
{
protected:
int roll;
string name;
public:
void disp(void)
{
cout<<"enter a roll no ";
cin>>roll;
cout<<"enter a student name ";
cin>>name;
}
};
class test:virtual public stu
{
protected:
int m;
public:
void disp1(void)
{
cout<<"enter a marks ";
cin>>m;
}
};
class sport:virtual public stu

{
protected:
int sp;
public:
void disp2(void)
{
cout<<"enter a sports marks";
cin>>sp;
}
};
class totall:public test,public sport
{
public:
void disp3(void)
{
disp();
disp1();
disp2();
disp();
disp1();
disp2();
}
};
int main()
{
totall obj;
obj.disp3();
}
