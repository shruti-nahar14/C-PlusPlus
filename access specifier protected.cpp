/////////////////////////////////////
/*Input:--
*Output: 
         Base class
         value of A in base clase 10
         value of B in base class 20
         value of A in base class 10
         value of B in base class 20
*Description:Implementation of protected access specifier
*Date:06-09-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    int y;
    public:
    A()
    {
        cout<<"\nBase class";
        x=10;
        y=20;
    }
};
class B:protected A
{
    public:
    B()
    {
        cout<<"\nvalue of A in base clase "<<x;
        cout<<"\nvalue of B in base class "<<y;
    }
};
class c:protected B
{
    public:
    c()
    {
        cout<<"\nvalue of A in base clase "<<x;
        cout<<"\nvalue of B in base class "<<y;
    }
};
int main()
{
    c obj;
}
