/////////////////////////////////////
/*Input:--
*Output:counter is 0
        counter is 0
        counter is 0
        number is 100
        number is 200
        number is 300
        counter is 3
        counter is 3
        counter is 3
*Description:Implementation of static  data member
*Date:19-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int no;
static int coun;
public:
void getval(int);
public:
void dispcou(void);
};
void test::getval(int x)
{
no=x;
cout<<"number is "<<no<<"\n";
coun++;
}
void test::dispcou()
{
cout<<"counter is "<<coun<<"\n";
}
int test::coun;
int main()
{
test t1,t2,t3;
t1.dispcou();
t2.dispcou();
t3.dispcou();
t1.getval(100);
t2.getval(200);
t3.getval(300);
t1.dispcou();
t2.dispcou();
t3.dispcou();
}
