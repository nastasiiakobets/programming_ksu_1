#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a, b;

	cout << "enter the length of the line a=" << endl;
	cin >> a;
	cout << "enter the length of the line b=" << endl;
	cin >> b;
	double c;
	c = a % b;
	cout << "unoccupied lenght =" << c << endl;

	return 0;
}