/////////////////////////////////////
/*Input:--
*Output:1object created
        2object created
        3object created
        3object destroyed
        2object destroyed
        1object destroyed
*Description:Use of Destructor with the use of static variable
*Date:10-June-2021
*Author:Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class test
{
static int countt;
public:
test()
{
countt++;
cout<<countt<<"object created"<<"\n";
}
~test()
{
cout<<countt<<"object destroyed"<<"\n";
countt--;
}
};
int test::countt;
int main()
{
test t1;
test t2;
test t3;
}

