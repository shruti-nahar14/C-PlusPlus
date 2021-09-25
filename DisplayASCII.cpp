//Description: Enter a character  from user and display its ASCII value
//Date : 25/09/2021
//Author : Shruti Nahar
#include<iostream>
using namespace std;

int DisplayASCII(char ch)
{
    int iRet=(int) ch;
    return iRet;
}

int main()
{
   char ch;
   int iRet=0;

   cout<<"Enter a Charcter:";
   cin>>ch;

   iRet=DisplayASCII(ch);
   cout<<"ASCII Value of "<<ch<<" is "<< iRet;

   return 0;
}