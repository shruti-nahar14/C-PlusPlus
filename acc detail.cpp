//////////////////////////////////////////
/*Input: enter hoe many objects do you want
        3
        enter the acc no 101
        enter the acc holder name shruti
        enter the salary 1000
        -----------------------------
        enter the acc no 102
        enter the acc holder name shubham
        enter the salary 3000
        -------------------------------
        enter the acc no 103
        enter the acc holder nameriya
        enter the salary 8000
*Output:
       -----------------Account Details--------------------------------

        Acc no: 101

        Acc holder name: shruti

        Salary : 1000

        Annual salary: 12000

         Tax: 0.07

        -----------------Account Details--------------------------------

        Acc no: 102

        Acc holder name: shubham

        Salary : 3000

        Annual salary: 36000

         Tax: 0.09

        -----------------Account Details--------------------------------

        Acc no: 103

        Acc holder name: riya

        Salary : 8000

        Annual salary: 96000

         Tax: 0.09

*Description:Real-time application to display Account Details and AnnualSalary and tax
*Date: 23-June-2021
*Author name: Shruti Nahar
*/
#include<iostream>
using namespace std;
class account
{
int accno;
int salary;
int annualsalary;
char name[20];
float tax;
public:
void accept()
{
cout<<"enter the acc no ";
cin>>accno;
cout<<"enter the acc holder name";
cin>>name;
cout<<"enter the salary ";
cin>>salary;
}
void calculate()
{
annualsalary=12*salary;
tax=0;
if(annualsalary<10000)
{
tax=0.05;
}
else if(annualsalary>10000&&annualsalary<20000)
{
tax=0.07;
}
else
{
tax=0.09;
}
}
void display()
{
cout<<"\n\t-----------------Account Details--------------------------------\n";
cout<<"\n\tAcc no: "<<accno<<"\n";
cout<<"\n\tAcc holder name: "<<name<<"\n";
cout<<"\n\tSalary : "<<salary<<"\n";
cout<<"\n\tAnnual salary: "<<annualsalary<<"\n";
cout<<"\n\t Tax: "<<tax<<"\n";
}
};
int main()
{
    int n,i;
    cout<<"enter hoe many objects do you want"<<"\n";
    cin>>n;
account arr[30];
for(i=0;i<n;i++)
{
arr[i].accept();
arr[i].calculate();
}
for(i=0;i<n;i++)
{
    arr[i].display();
}
}
