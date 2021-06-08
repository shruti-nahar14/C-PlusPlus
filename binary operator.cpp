////////////////////////////////////
/*class:test
*Constructor:test()
            test(int x,int y)
            test operator+(test t)
*Function:void disp(void);
*Input:--
*Output:value of A 10
        value of B 20
        value of A 20
        value of B 40
        After Addition:
        value of A 30
        value of B 60
*Description:Addition of two numbers using Binary operator overloading
*Date: 8-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
    int a,b;
public:
    test()
    {
        a=0;
        b=0;
    }
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    test operator+(test t)
    {
        test temp;
        temp.a=a+t.a;
        temp.b=b+t.b;
        return temp;
    }
    void disp()
    {
        cout<<"value of A "<<a<<"\n";
        cout<<"value of B "<<b<<"\n";
    }
};
int main()
{
    test t1,t2,t3;
    t1=test(10,20);
    t2=test(20,40);
    t3=t1+t2;
    t1.disp();
    t2.disp();
    cout<<"After Addition: \n";
    t3.disp();
}
