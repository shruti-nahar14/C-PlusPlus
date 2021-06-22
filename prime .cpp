/////////////////////////////////////
/*Input: enter a no: 11
*Output:11 is a prime
*Description:Check number is prime or not
*Date: 22-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{

int no,i,ans;
cout<<"enter a no";
cin>>no;
for(i=2;i<no/2;i++)

{
    ans=no%i;
    if(ans==0)

    {
cout<<no<<" is not a prime";
break;
    }
    }
cout<<no<<" is a prime";

}
