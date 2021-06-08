////////////////////////////////////
/*Function:int fun(int x,int y)
               double fun1(int x,int y)
*Input:--
*Output:15
        50
*Description:Perform Addition and Multiplication 
*Date: 8-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;

int fun(int x,int y)
{
    return x+y;
}
double fun1(int x,int y)
{
    return x*y;

}
int main()
{
    cout<<fun(5,10);
    cout<<fun1(5,10);

}
