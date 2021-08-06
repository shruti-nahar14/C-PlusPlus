/////////////////////////////////////
/*Input: 
enter the first part
enter a real part
10
enter a img part
20
enter the second part
enter a real part
30
enter a img part
40
*Output: 
 The addition is 40+i60
 The multiplication is -500+i1000
*Description:Implementation of Operator Overloading to find addition and multiplication of complex number
*Date:6-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<iostream>
using namespace std;
class complexx
{
int real,img;
public:
complexx(int r=0,int i=0)
{
real=r;
img=i;
}
public:
friend  ostream & operator<<(ostream &out, complexx &obj);
friend istream & operator>>(istream &in, complexx &obj);

public:
complexx operator+(complexx &obj)
{
complexx res;
res.real= real + obj.real;
res.img=img + obj.img;
return res;
}
public:
complexx operator*(complexx &obj)
{
complexx res;
res.real=(((real)*(obj.real))-((img)*(obj.img)));
res.img=(((real)*(obj.img))+((obj.real)*(img)));
return res;
}
};
ostream & operator<<(ostream &out, complexx &obj)
{
   out<<obj.real;
  out<<"+i"<<obj.img;
  return out;
}

istream &operator>>(istream &in, complexx &obj)
{
cout<<"enter a real part\n";
in>>obj.real;
cout<<"enter a img part\n";
in>>obj.img;
return in;
}
int main()
{
complexx c1,c2,c3,c4;
cout<<"enter the first part\n";
cin>>c1;
cout<<"enter the second part\n";
cin>>c2;
c3=c1+c2;
cout<<"\n The addition is "<<c3;
c4=c1*c2;
cout<<"\n The multiplication is "<<c4;
}

