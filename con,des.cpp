#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
    int emid;
    char emname[20];
    int emsal;
    public:
    Employee()
    {
        cout<<"\n call of default constructor \n";
        emid=100;
        strcpy(emname,"raj");
        emsal=5000;
    }
    Employee(int id,char name[],int sal)
    {
        cout<<"\n Call of Parameterized constructor \n";
        emid=id;
        strcpy(emname,name);
        emsal=sal;
    }
    Employee (Employee *temp)
    {
        cout<<"\n Call of copy constructor \n";
        this->emid=temp->emid;
        strcpy(this->emname,temp->emname);
        this->emsal=temp->emsal;
    }
void display()
{
    cout<<"\n---------------------------------------------------------------\n";
    cout<<" Employee id : "<<emid<<"\n";
    cout<<" Employee name : "<<emname<<"\n";
    cout<<" Employee sal : "<<emsal<<"\n";
}
~Employee()
{
    cout<<"\nDestructor is called\n";
}
};
int main()
{
    Employee e1;
    Employee e2(101,"Shruti",10000);
    Employee e3(102,"sheetal",20000);
    Employee e4(&e2);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
}
