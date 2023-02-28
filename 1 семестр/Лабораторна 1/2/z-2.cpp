#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a;
	double c ,b,  d, s, dob;
	cout << "enter the number=" << endl;
	cin >> a;
	b = a / 100;
	c = (a/10) % 10;
	d = a % 10;
	cout << "=" << b << " " << c << " " << d << endl;
	s = b + c + d;
	dob = b * c * d;
	cout << "sum =" << s << endl << "product=" << dob << endl;

	return 0;
}