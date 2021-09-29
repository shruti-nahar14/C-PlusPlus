/*input:-100
output:- 
       Perfect number 6
       Perfect number 28
description:Enter a number from user and display perfect till the number
date: 28-09-2021
Author name: Shruti Nahar*/
#include<iostream>
using namespace std;
int main()
{
    int num=100;
    for(int i=1;i<=num;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            cout<<"Perfect number "<<i<<"\n";
        }
        
    }
}