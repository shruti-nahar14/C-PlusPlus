//////////////////////////////////
/*Input:--
*Output:10
        19
         2
*Description:use of increment and decrement operator
*Author: Shruti Nahar
*Date: 16-july-2021*/
//////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int i=10,j=20,k;
k=i-- - i++ + --j + --i - j-- + ++i - j++;
cout<<i<<"\n";
cout<<j<<"\n";
cout<<k;
}
