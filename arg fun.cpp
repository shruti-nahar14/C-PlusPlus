/////////////////////////////////////
/*Function:Void sqr(int);
*Input: 2
*Output:square is 4
*Description:Display the square of the number.
*Date: 4-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
void sqr(int);
int main()
{
int no;
cout<<"enter a no ";
cin>>no;
sqr(no);
}
void sqr (int x)
{
int ans;
ans=x*x;
cout<<"square is "<<ans;
}
