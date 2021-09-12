/*Input--
output:
Description:-Array as a template class
Date:-12-09-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
#define MAX 5 
template <class T>
class mygreater
{
public:
T arr[MAX],i;
T greaterarr()
{
for(i=0;i<MAX;i++)
{
if(arr[i]<arr[i+1])
{
return arr[i+1];
}
else
{
return arr[i];
}
}
}
};
int main()
{
T arr[MAX],i;
for(i=0;i<MAX;i++)
{
cout<<arr[i];
}
mygreater <int> myobject;
cout<<myobject.greaterarr();
}
