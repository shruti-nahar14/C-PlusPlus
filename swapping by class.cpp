/////////////////////////////////////
/*Input: enter a value of a & b 10 20
*Output: value of a & b after swapping 20 10
*Description:swapping of two number using class
*Date:8-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class first
{
public:
    int a,b,temp;
void fun(void)
{
cout<<"enter a value of a & b ";
cin>>a>>b;
}
void swa(void);
};
void first::swa(void)
{
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a & b after swapping "<<a<<" "<<b;
}
int main()
{
    first obj;
obj.fun();
obj.swa();
}
