/////////////////////////////////////
/*Input:1 2 3
        4 5 6
        7 8 9
*Output:Elements of array are:-
        1 2 3
        4 5 6
        7 8 9
*Description:Display the 2D Matrix
*Date: 9-June-2021
*Author:
 Shruti Nahar*/ 
/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
int arr[5][3],j,i;
cout<<"enter elements of array";
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
cin>>arr[i][j];
}
}
cout<<"elements of array \n";
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
cout<<arr[i][j];
}
cout<<"\n";
}
}
