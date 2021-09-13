/////////////////////////////////////
/*Input:enter the id of the product 101
        enter the name of the product laptop
        enter the price of product 200000
        enter the Quantity of product 2

         enter the id of the product 102
         enter the name of the product mobile
         enter the price of product 350000
         enter the Quantity of product 3
*Output:
Id of product 101
Name of product laptop
Price of product 200000
Quantity of product 2

Id of product 102
Name of product mobile
Price of product 350000
Quantity of product 3

*Description:Real time shopping application using class
*Date:13-09-2021
*Author: Shruti Nahar */


//common feature of class is called as variable and object are their types
//class is basic buleprint of object
//imagination of class features is called blueprint
//hidden information is called as abstraction and access that information is called as encapsulation
#include<iostream>
using namespace std;
class product
{
    int id,price,quantity; //it is private because we access by using fuh
    char name[20];
    public:
        void accept()
        {
            cout<<"enter the id of the product ";
            cin>>id;
            cout<<"enter the name of the product ";
            cin>>name;
            cout<<"enter the price of product ";
            cin>>price;
            cout<<"enter the Quantity of product ";
            cin>>quantity;
        }
    public:
        void display()
        {
            cout<<"Id of product "<<id<<"\n";
            cout<<"Name of product "<<name<<"\n";
            cout<<"Price of product "<<price<<"\n";
            cout<<"Quantity of product "<<quantity<<"\n";
        }
};
int main()
{
    product obj1,obj2;
    obj1.accept();
    obj1.display();
    obj2.accept();
    obj2.display();
}
