////////////////////////////////////////////////
*Input: 0
*Output:
1
2
3
4
5
6
7
8
9
10
1
2
2
4
3
6
4
8
5
10
6
12
7
14
8
16
9
18
10
20
*Description: Looping program
*Author:Shruti Nahar
//////////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int i;
for(i=1;i<=10;i++)
{
cout<<i<<"\n";
}
int a,b;
for(a=1,b=2;a<=5,b<=20;a++,b=b+2)
{
    cout<<a<<"\n";
    cout<<b<<"\n";
}
}
