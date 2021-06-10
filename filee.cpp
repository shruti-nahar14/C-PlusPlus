/////////////////////////////////////
/*Input:Abc
        200
*Output:Product name is Abc
        Price is 200
*Description:Use of File Handling events
*Date:10-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
#include<fstream>
int main()
{
char name[20];
int cost;
cout<<"enter name of product";
cin>>name;
cout<<"cost is";
cin>>cost;
ofstream outf("filee.txt");
outf<<name<<"\n";
outf<<cost;
outf.close();
ifstream inf("filee");
inf>>name;
inf>>cost;
cout<<"name of product"<<name<<"\n";
cout<<"cost is"<<cost;
inf.close();

}
