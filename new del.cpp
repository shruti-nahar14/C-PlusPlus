/////////////////////////////////////
/*Input:--
*Output:
enter no of subject 5
enter subjects marks
subject1
100
subject2
50
subject3
70
subject4
80
subject5
65
subjects marks are
100
50
70
80
65
total is365
*Description:Use of new and delete to display total of marks
*Date:17-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
int no,i,total=0;
int *p;
cout<<"enter no of subject";
cin>>no;
p=new int[no];
cout<<"enter subjects marks \n";
for(i=0;i<no;i++)
{
cout<<"subject"<<i+1<<"\n";
cin>>p[i];
}
cout<<"subjects marks are \n";
for(i=0;i<no;i++)
{
cout<<p[i]<<"\n";
total=total+p[i];
}
cout<<"total is"<<total<<"\n";
delete[]p;
}
