/////////////////////////////////////
/*Input:text is shruti
*Output:shruti
        number of char are 7
*Description:Use of get() and put()
*Date: 12-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int countt=0;
char ch;
cout<<"text is ";
while(ch!='\n')
{
cin.get(ch);
cout.put(ch);
countt++;
}
cout<<"number of char are "<<countt;
}
