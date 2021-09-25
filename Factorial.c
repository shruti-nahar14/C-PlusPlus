//Description: Enter a number from user andd display factorial
//Date : 25/09/2021
//Author : Shruti Nahar

#include<stdio.h>

void Factorial(int iNo)
{
    int i=0;
    for(int i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iNo=0;
    printf("Enter a Number from upto you want factorial:");
    scanf("%d",&iNo);

    Factorial(iNo);
    return 0;
}