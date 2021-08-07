/////////////////////////////////////
/*Input:enter a dividend 10
        enter a divisor 2
*Output: quotient is 5
         reminder is 0
*Description:find the reminder and quotient
*Date:7-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int dividend,divisor,qoutient ,reminder;
cout<<"enter a dividend ";
cin>>dividend;
cout<<"enter a divisor";
cin>>divisor;
qoutient=dividend/divisor;
cout<<"quotient is "<<qoutient<<"\n";
reminder=dividend%divisor;
cout<<"reminder is "<<reminder;
}
