/////////////////////////////////////
/*Input: --
*Output: object Avalue of a 0
         value of b 0
         object Bvalue of a 100
         value of b 100
         object Cvalue of a 200
         value of b 300
*Description:Constructor Overloading
*Date:5-July-2021
*Author: Shruti Nahar */
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
test(int x)
{
a=b=x;
}
test(int x,int y)
{
a=x;
b=y;
}
void disp(void)
{
cout<<"value of a "<<a<<"\n";
cout<<"value of b "<<b<<"\n";
}
};
int main()
{
test A;
test B(100);
test C(200,300);
cout<<"object A";
A.disp();
cout<<"object B";
B.disp();
cout<<"object C";
C.disp();
}
