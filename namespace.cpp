/////////////////////////////////////
/*Input:10 20
*Output:Addition is 30
*Description:Use of namespaces
*Date:17-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
namespace first
{
   public:
    int a,b;
void fun()
{
cout<<"enter a value of a & b ";
cin>>a>>b;
}
}
namespace second
{
    public:
    int c;
void fun()
{
c=a+b;
cout<<"addition is "<<c;
}
}
int main()
{
first::fun();
second::fun();
}
