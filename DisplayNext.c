//Description: Enter a Number and character from user and display Next n letters 
//Date : 25/09/2021
//Author : Shruti Nahar

#include<stdio.h>

void Display(char c, int iNo)
{
    for(int i=c ;i<(c+iNo) ;i++)
    {
        printf("%c\t",i);
    }
}

int main()
{
    int iNo=0;
    char ch;

    printf("Enter a Charcter:");
    scanf(" %c",&ch);

    printf("Enter How many next character you want:");
    scanf("%d",&iNo);

    Display(ch,iNo);

    return 0;
}