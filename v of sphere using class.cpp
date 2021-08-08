/////////////////////////////////////
/*Input: --
*Output: volume of sphere is 84.78
*Description:find the volume of sphere using class
*Date:8-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class sphere
{
public:
int r;
public:
double v;
public:
void computevolume()
{
 v = 4/3*3.14*r*r*r;
cout<<"volume of sphere is "<<v;
}
};
int main()
{
sphere obj;
obj.r=3;
obj.computevolume();
}
