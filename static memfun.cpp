/////////////////////////////////////
/*Input:--
*Output:object number 1
        object number 2
        counter value is 2
        object number 3
        counter value is 3
*Description:Implementation of static member function
*Date:19-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int no;
static int cou;
public:
void setno(void)
{
no=++cou;
}
void dispno(void)
{
cout<<"object number "<<no<<"\n";
}
static void dispcou(void)
{
cout<<"counter value is "<<cou<<"\n";
}
};
int test::cou;
int main()
{
test t1,t2,t3;
t1.setno();
t2.setno();
t1.dispno();
t2.dispno();
test::dispcou();
t3.setno();
t3.dispno();
test::dispcou();
}
