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
sorted elements are
10
20
30
40
50
60
70
80
90
100
*Description:Merge and sort using multiple inheritance
*Date:15-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class A
{
protected:
int arr1[5],arr2[5],i;
public:
void fun()
{
cout<<"enter the elements of 1st array ";
for(i=0;i<5;i++)
{
cin>>arr1[i];
}
}
public:
void fun1()
{
cout<<"enter the elements of 1st array ";
for(i=0;i<5;i++)
{
cin>>arr2[i];
}
}
};
class B:virtual public A
{
    protected:
    int arr3[10],k=0;
    public:
void mer()
{
for(i=0;i<10;i++)
{
if(i>4)
{
arr3[i]=arr2[k];
k++;
}
arr3[i]=arr1[i];
}
}
public:
void disp()
{
cout<<"merged elements are\n";
for(i=0;i<10;i++)
{
cout<<arr3[i]<<"\n";
}
}
};
class C:virtual public A,public B
{
    int temp,j;
    public:
  void sor()
  {
fun();
fun1();
mer();
disp();
i=0;
j=0;
k=0;
while(i<5&&j<5)
{
              if(arr1[i]<arr2[j])
              {
              arr3[k]=arr1[i];
              i++;
              k++;
          }
          else
          {
              arr3[k]=arr2[j];
              j++;
              k++;
          }
      }
      while(i<5)
        arr3[k++]=arr1[i++];
      while(j<5)
        arr3[k++]=arr2[j++];
  }
    void display ()
    {
cout<<"sorted elements are\n";
for(k=0;k<10;k++)
{
    cout<<arr3[k]<<"\n";
}
    }
};
int main()
{
C obj;
obj.sor();
obj.display();
}
