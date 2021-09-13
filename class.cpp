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
