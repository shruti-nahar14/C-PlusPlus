#include <bits/stdc++.h>
using namespace std;

int fun(int ptr[])
{
	int x = 10;
	
	// Size of a pointer is printed
	cout << "sizeof(ptr) = "
		<< (int)sizeof(*ptr)
		<< endl;

	// This allowed because ptr is a
	// pointer, not array
	ptr = &x;

	cout <<"*ptr = " << *ptr;

	return 0;
}

// Driver code
int main()
{
	int arr[] = { 10, 20, 30, 40, 50, 60 };
	
	// Size of a array is printed
	cout << "sizeof(arr) = "
		<< (int)sizeof(arr)
		<< endl;
		
	fun(arr);
	
	return 0;
}
