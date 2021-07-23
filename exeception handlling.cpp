#include<iostream>
#include<exception>
using namespace std;
class Age_Exception:public exception
{
    public:
    const char*what() const throw() //standard signature present in exception class // overridden what()
    {
        return "\nAge is not in between 18 to 55\n";
    }
};
class Income_Exception:public exception
{
    const char*what() const throw()
    {
        return "\nIncome is not in between 50,000 to 1,00,000\n";
    }
};
class City_Exception:public exception
{
    const char*what() const throw()
    {
        return "\ncity is not pune/mumbai/bangalore/chennai\n";
    }
};
class Wheel_Exception:public exception
{
    const char*what() const throw()
    {
        return "\nVechile is not a four wheeler\n";
    }
};
int main()
{
    int age,income,wheel;
    char city[20];
    cout<<"enter the age";
    cin>>age;
    try
    {
        if(age<18 || age>55)
        {
            Age_Exception ae;
            throw ae;
        }
        else
        {
            cout<<"Age is "<<age;
        }
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    cout<<"enter the income";
    cin>>income;
    try
    {
        if(income<50000 || age>100000)
        {
            Income_Exception ie;
            throw ie;
        }
        else
        {
            cout<<"\nIncome is "<<income;
        }
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    cout<<"enter the city";
    cin>>city;
    try
    {
        if(city!="pune" || city!="bangalore" || city!="mumbai" || city!="chennai")
        {
            City_Exception ce;
            throw ce;
        }
        else
        {
            cout<<"\ncity is "<<city;
        }
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    cout<<"enter the wheel";
    cin>>wheel;
    try
    {
        if(wheel!=4)
        {
            Wheel_Exception we;
            throw we;
        }
        else
        {
            cout<<"\nvechile is four wheeler\n";
        }
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
}

