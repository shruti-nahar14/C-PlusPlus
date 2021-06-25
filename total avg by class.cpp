//////////////////////////////////////
/*Input: enter a four no.
10
20
30
40
*Output: total is 100
         average is 25
*Description:Find the total and average by using class
*Date: 25-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class abc
{
int a,b,c,d,tota,averag;
public:
void fun(void)
{
cout<<"enter a four no.";
cin>>a>>b>>c>>d;
}
int tot(void);
int avg(void);
 };
 int abc::tot(void)
 {
  tota=a+b+c+d;
  cout<<"total is "<<tota<<"\n";
  return (tota);
}
int abc::avg(void)
{
averag=(a+b+c+d)/4;
cout<<"average is "<<averag;
return (averag);
}
int main()
{
abc obj;
obj.fun();
obj.tot();
obj.avg();
}
