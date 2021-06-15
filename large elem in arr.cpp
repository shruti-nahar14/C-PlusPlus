/////////////////////////////////////
/*Input:--
*Output:
elements of array are 10
20
30
60
50
largest element in array is 60
*Description:Find largest element in array by using concept of inheritance
*Date:15-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class A
{
public:
int arr[5]={10,20,30,60,50};
int i;
void disp()
{
cout<<"elements of array are ";
for(i=0;i<5;i++)
{
cout<<arr[i]<<"\n";
}
}
};
class B:public A
{
int larg;
public:
void display()
{
for(i=0;i<5;i++)
{
if(larg<arr[i])
{
larg=arr[i];
}
}
cout<<"largest element in array is "<<larg;
}
};
int main()
{
B obj;
obj.disp();
obj.display();
}
