/////////////////////////////////////
/*Function:void arr(int[],int&);
*Input: 1 2 3 4 5
*Output: elements of array:
         1
         2
         3
         4
         5
         Sum is 15
*Description:Display the elements array and perform addititon on it:-use of call by reference
*Date:06-09-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<iostream>
using namespace std;
void arr(int[],int &);
int main()
{
int a1[5],i;
cout<<"enter the element of array";
for(i=0;i<5;i++)
{
cin>>a1[i];
}
arr(a1,i);
}
void arr(int ar[],int &s)
{
int i,sum=0;
cout<<"elements of array\n";
for(i=0;i<5;i++)
{
cout<<ar[i]<<"\n";
sum=sum+ar[i];
}
cout<<"sum is "<<sum;
}
