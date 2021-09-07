///////////////////////////////////////
/*Input:5
*Output:five
*Description:Enter the number and display its spelling if<9 else display Greater than 9
*Date: 9-June-2021
*Author:Shruti Nahar*/ 
/////////////////////////////////////////
#include<iostream>
using namespace std;
int main() 
{
int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
cout<<"Enter the number";
cin >> in;

if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}

return 0;
}
