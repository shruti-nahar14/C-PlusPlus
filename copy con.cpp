/////////////////////////////////////
/*Input: --
*Output: before swapping
         value of code 101
         value of price 203
         after swapping
         value of code 203
         value of price 101
*Description:Implementation of copy constructor
*Date:6-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
int code,price;
public:
test (int c ,int p)
{
code=c;
price=p;
}
test (const test &t)
{
code=t.price;
price=t.code;
}
void disp(void)
{
cout<<"value of code "<<code<<"\n";
cout<<"value of price "<<price<<"\n";
}
};
int main()
{
test t1(101,203);
test t2=t1;
cout<<"before swapping"<<"\n";
t1.disp();
cout<<"after swapping"<<"\n";
t2.disp();
}
