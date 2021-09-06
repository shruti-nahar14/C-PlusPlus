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
