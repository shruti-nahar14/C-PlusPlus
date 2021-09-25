//Description: Enter a Character from user and display its previous and next character
//Date : 25/09/2021
//Author : Shruti Nahar

#include<stdio.h>

void Character(char ch)
{
    ch=ch-1;
    printf("Previous Character is %c\n",ch);

    ch=ch+2;
    printf("Next Charater is %c\n",ch);
}

int main()
{
    char ch;
    printf("Enter a Charcter");
    scanf(" %c",&ch);

    Character(ch);

    return 0;
}