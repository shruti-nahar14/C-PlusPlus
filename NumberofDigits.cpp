//Description: Enter a Number from user and count number of digits
//Date : 25/09/2021
//Author : Shruti Nahar

#include<iostream>
using namespace std;

int NumberofDigits(int iNo)
{
    int iCnt=0;
    while(iNo!=0)
    {
        iCnt++;
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int iNo=0,iRet=0;
    
    cout<<"Enter a Number:";
    cin>>iNo;

    iRet=NumberofDigits(iNo);

    cout<<"Number of Digits are:"<<iRet;

    return 0;
}