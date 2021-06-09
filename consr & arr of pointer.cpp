/////////////////////////////////////
/*Input:1 2 3 4
*Output:Elements of array are:-
        1 
        2
        3
        4
*Description:Display the elements of array using pointer
*Date: 9-June-2021
*Author:
 Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
    const int a=4;
int i,arr[a];
int *p[a];
cout<<"enter a elements of array";
for(i=0;i<a;i++)
{
cin>>arr[a];
p[i]=&arr[i];
}
cout<<"elements of array are";
for(i=0;i<a;i++)
{
cout<<*p[i];
}
}
