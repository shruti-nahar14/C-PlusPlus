/////////////////////////////////
/*Input:enter the no of acc
3
enter the acc no101
enter the customer nameshruti
enter the balance2000
enter the acc no102
enter the customer nameshubham
enter the balance3000
enter the acc no103
enter the customer nameprachi
enter the balance6000

enter the acc no of transcation102

 1 deposit
 2.withdraw
enter your choice 2

 enter the amount for the withdraw 500
 
 Do you want to continue press 1
1

enter your choice 1

enter the amount to deposit
1000
Do you want to continue press 1
2
Output:-

------------------Account Details--------------------
Acc no:101
Acc Balance2000
Customer nameshruti

-----------------------------------------------------------------------

------------------Account Details--------------------
Acc no:102
Acc Balance3000
Customer nameshubham

-----------------------------------------------------------------------

------------------Account Details--------------------
Acc no:103
Acc Balance6000
Customer nameprachi

-----------------------------------------------------------------------

-----------------------------sorting----------------------------------

------------------Account Details--------------------
Acc no:101
Acc Balance2000
Customer nameshruti

-----------------------------------------------------------------------

------------------Account Details--------------------
Acc no:102
Acc Balance3000
Customer nameshubham

-----------------------------------------------------------------------

------------------Account Details--------------------
Acc no:103
Acc Balance6000
Customer nameprachi

-----------------------------------------------------------------------

----------------------------AFTER WITHDRAW-------------------------------
Acc no:102
Acc Balance2500
Customer nameshubham

-------------------------AFTER DEPOSIT-----------------------------
Acc no:102
Acc Balance3500
Customer nameshubham
Description:-Implementation of Account Operation 
Author name:-Shruti Nahar
Date:-10-09-2021
*/
///////////////////////////////////////////
#include<iostream>
using namespace std;
class acc
{
public:
int no,bal;
char name[20];
public:
void accept()
{
cout<<"enter the acc no";
cin>>no;
cout<<"enter the customer name";
cin>>name;
cout<<"enter the balance";
cin>>bal;
}
void display()
{
cout<<"Acc no:"<<no<<"\n";
cout<<"Acc Balance"<<bal<<"\n";
cout<<"Customer name"<<name<<"\n";
}
int getbal()
{
    return bal;
}
int getaccno()
{
    return no;
}
void setbal(int newbal)
{
    bal=newbal;
}
void drawbal(int drawbal)
{
    bal=drawbal;
}
};
int main()
{
    acc arr[10];
    acc temp;
    int n,i,j;
    printf("enter the no of acc \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i].accept();
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n------------------Account Details--------------------\n";
        arr[i].display();
        cout<<"\n-----------------------------------------------------------------------\n";
    }

    cout<<"\n-----------------------------sorting----------------------------------\n";

        for(i=0;i<n-1;i++)
        {

        for(j=i+1;j<n;j++)
        {
            if(arr[i].getbal()>arr[j].getbal())
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        }
        for(i=0;i<n;i++)
    {
        cout<<"\n------------------Account Details--------------------\n";
        arr[i].display();
        cout<<"\n-----------------------------------------------------------------------\n";
    }
    int ch;
    int accno;
    bool b=false;
    int amt;
    int index=-1;
    int bal;
    int draw;
    cout<<"enter the acc no of transcation";
    cin>>accno;
    for(i=0;i<n;i++)
    {
    if(arr[i].getaccno()== accno)
    {
        index=i;
        b=true;
        break;
    }
    }
    if(b)
    {
    cout<<"\n 1 deposit \n 2.withdraw ";
    do
    {
    cout<<"\nenter your choice ";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\nenter the amount to deposit \n";
        cin>>amt;
        bal=arr[index].getbal();
        bal=bal+amt;
        arr[index].setbal(bal);
        cout<<"\n-------------------------AFTER DEPOSIT-----------------------------\n";
        arr[index].display();
    }
    else if(ch==2)
    {
        cout<<"\n enter the amount for the withdraw ";
        cin>>draw;
        bal=arr[index].getbal();
        bal=bal-draw;
        arr[index].drawbal(bal);
        cout<<"\n----------------------------AFTER WITHDRAW-------------------------------\n";
        arr[index].display();
    }
    else
    {
        cout<<"invalid choice";
    }
    cout<<"\n Do you want to continue press 1\n";
    cin>>ch;
    }while(ch==1);
}
}

