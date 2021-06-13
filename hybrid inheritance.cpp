/////////////////////////////////////
/*Input:--
*Output:dish 1 is dosa
        dish 2 is chinese
        enter a no of order of 1st dish 2
        enter a no of order of 2nd dish 4
        price of 1st dish 80
        price of 2nd dish 120
        total bill is 640
*Description: Use of Hybrid Inheritance
*Date: 13-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
class dish
{
protected:
 string dish1,dish2;
 public:
 void disp(void)
 {
 cout<<"dish 1 is ";
 cin>>dish1;
 cout<<"dish 2 is ";
 cin>>dish2;
 }
 };
 class order:public dish
 {
 protected:
 int n1,n2;
 public:
 void disp1(void)
 {
 cout<<"enter a no of order of 1st dish ";
 cin>>n1;
 cout<<"enter a no of order of 2nd dish ";
 cin>>n2;
 }
 };
 class price
 {
 protected:
 int p1,p2;
 public:
 void disp2(void)
 {
 cout<<"price of 1st dish ";
 cin>>p1;
 cout<<"price of 2nd dish ";
 cin>>p2;
 }
 };
 class total:public order,public price
 {
 int total;
 public:
 void disp3(void)
 {
 disp();
 disp1();
 disp2();
 total=n1*p1+n2*p2;
 cout<<"total bill is "<<total;
 }
 };
 int main()
 {
 total obj;
 obj.disp3();
 }
