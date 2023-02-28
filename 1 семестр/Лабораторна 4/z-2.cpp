#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char a, b;
	cout << "enter a and b: ";
	cin >> a >> b;

	char* aa, * bb;
	aa = &a; bb = &b; 

	cout <<endl<< "enter new a: ";
	cin >> *aa;
	
	swap(a, b);
	cout << endl <<"a=" << a << " b="<< b;

	return 0;
}