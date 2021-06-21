/////////////////////////////////////
/*Input:--
*Output:
------------Array--------------
elements of array are
10
20
30
40
50
-----------Pointer--------------
elements of array are
10
20
30
40
50
total is 140
*Description:Use of pointer and array to display elements
*Date:21-June-2021
*Author: Shruti Nahar*/ 
////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int arr[5]={10,20,30,40,50};
int *p,i,sum=0;
p=&arr[0];
cout<<"------------Array--------------";
cout<<"\nelements of array are\n";
for(i=0;i<5;i++)
{
cout<<arr[i]<<"\n";
}
cout<<"-----------Pointer--------------";
cout<<"\nelements of array are\n";
for(i=0;i<5;i++)
{
cout<<*p<<"\n";
p++;
sum=sum+*p;
}
cout<<"\n total is "<<sum;
}
