/////////////////////////////////////
/*Input:30 20 40 10 50
        90 80 70 100 60
*Output:merged elements are
30
20
40
10
50
90
80
70
100
60
*Description:Merge elements of array
*Date:15-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int arr1[5],arr2[5],arr3[10],i=0,j=0,k=0;
cout<<"enter the elements of 1st array";
for(i=0;i<5;i++)
{
cin>>arr1[i];
}
cout<<"enter the elements of 2nd array";
for(j=0;j<5;j++)
{
cin>>arr2[j];
}
cout<<"merge the elements of 1st & 2nd array";
while(i<5&&j<5)
{
if(arr1[i]<arr2[j])
{
arr3[k]=arr[i];
i++;
k++;
}
else
{
arr3[k]=arr2[j];
j++;
k++;
}
cout<<"elements of third array";
for(k=0;k<10;k++)
{
    cout<<arr3[k];
}
}
