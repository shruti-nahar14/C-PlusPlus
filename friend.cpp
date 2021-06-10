/////////////////////////////////////
/*Function:friend void add(first , second, Third);
           void fun();
*Input:enter a value of a  10
       value of b is 20
       value of c is 30
*Output:10+20+30=60
*Description:Use of Friend Function
*Date:10-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class second;
class Third;
class first
{
    int a;
    public:
void fun()
{
cout<<"enter a value of a  ";
cin>>a;
}
friend void add(first,second, Third);
};
class second
{
int b;
public:
void fun(void)
{
cout<<"value of b is ";
cin>>b;
}
friend void add(first , second, Third);
};
class Third
{
int c;
public:
void fun(void)
{
cout<<"value of c is ";
cin>>c;
}
friend void add(first , second, Third);
};
void add (first ab1,second ab2,Third ab3)
{
    int sum;
    sum=ab1.a+ab2.b+ab3.c;
    cout<<ab1.a<<"+"<<ab2.b<<"+"<<ab3.c<<"="<<sum;
}
int main()
{
    first a;
    second b;
    Third c;
a.fun();
b.fun();
c.fun();
add(a,b,c);
}
