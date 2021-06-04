/////////////////////////////////////
/*Input: 2 7
*Output:
two
three
four
five
six
seven
*Description:Display the number with spelling from n1 to n2 range
*Date: 4-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter the range of numbers: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
}
