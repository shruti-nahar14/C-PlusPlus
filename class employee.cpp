#include<iostream>
using namespace std;
class Employee
{
//atribute or variable
int eid;
char name[20];
float grosssalary,salary,hra,pf,ta;
public:
//behaviour or methods
void getdata()
{
cout<<"enter the id";;
cin>>eid;
cout<<"enter the name of employee";
cin>>name;
cout<<"enter salary";
cin>>salary;
}
public:
void cal()
{
hra=salary*0.04;
pf=salary*0.05;
ta=salary*0.03;
}
public:
void disp()
{
printf("--------------welcome-----------");
printf("\n\t ID \tNAME \tSALARY \tHRA \tPF \tTA \tGROSS SALARY");
printf("\n\t %d \t%s \t%.2f \t%.2f \t%2.f \t%1.f \t%2.f",eid,name,salary,hra,pf,ta,grosssalary);
printf("\n--------------Thankyou-----------");
}
};
int main()
{
    Employee obj;
    cout<<"size of obj "<<sizeof(obj)<<"\n";
    obj.getdata();
    obj.cal();
    obj.disp();
}
