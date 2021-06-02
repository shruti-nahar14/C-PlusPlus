/////////////////////////////////////
*Input: 1 2 3 4 5
*Output: elements of array:
         1
         2
         3
         4
         5
         Sum is 15
*Description:Display the elements array and perform addititon on it
*Date:2-June-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int arr[5],i,sum=0;
cout<<"enter elements of array";
for(i=0;i<5;i++)
{
cin>>arr[i];
}
cout<<"elements of array \n";
for(i=0;i<5;i++)
{
cout<<arr[i]<<"\n";
sum=sum+arr[i];
}
cout<<"sum is"<<sum;
}
