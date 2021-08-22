//Function Name:ChkVowel
//Input:shubhAM
//Output:It contains Vowel
//Description:Accept String from user and Check whther it conatains vowel or not
//Date: 22/08/2021
//Author: Shruti Nahar
///////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Count
{
    public:
    bool ChkVowel(char *str)
    {
        int iCnt=0,iCnt1=0;
        while(*str!='\0')
        {
            if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
            {
               return true;
            }
        str++;
        }
        return false;
    }
};

int main()
{
    char str[50];

    cout<<"Enter a String:";
    scanf("%[^'\n']s",&str);

    Count obj;
    bool bRet=obj.ChkVowel(str);
    if(bRet==true)
    {
        cout<<"It contains Vowel";
    }
    else
    {
        cout<<"It doesn't Contains Vowel";
    }
    return 0;
}