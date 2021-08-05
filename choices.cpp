/////////////////////////////////////
/*Input: enter a choice 56
*Output: Greater than 9
*Description:Implementation of Inheritance 
*Date:5-July-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <iostream>
using namespace std;
class no
{
public:
int n;
public:
void fun()
{
cout<<"enter a choice";
cin>>n;
}
};
class choice:public no
{
public:
void choi()
{
    if(n==1)
    {
       cout<<"one"<<endl;
    }
    else if(n==2)
        {
       cout<<"two"<<endl;
    }
    else if(n==3){
        cout<<"three"<<endl;
    }
    else if(n==4){
        cout<<"four"<<endl;
    }
    else if(n==5){
        cout<<"five"<<endl;
    }
    else if(n==6)
    {
        cout<<"six"<<endl;
    }
    else if(n==7)
    {
        cout<<"seven"<<endl;
    }
    else if(n==8)
    {
        cout<<"eight"<<endl;
    }
    else if(n==9)
    {
        cout<<"nine"<<endl;
    }
    else {
        cout<<"Greater than 9"<<endl;
    }
}
};
int main()
{
no obj1;
obj1.fun();
choice obj2;
obj2.choi();
}
