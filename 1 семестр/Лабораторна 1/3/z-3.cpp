#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int k, n;
	cout << "enter number of the day(1-365)" << endl;
	cin >> k;
	cout << "enter number 'what day of the week was January 1st of the year'(1-m, 2-t) " << endl;
	cin >> n;
	int a;
	a = k % 7;
	if (k % 7 != 0)
	{
		if (n == 1 && a == 1) cout << "monday" << endl;
		else if (n == 2 && a == 2) cout << "tuesday" << endl;
		else if (n == 3 && a == 3) cout << "wednesday" << endl;
		else if (n == 4 && a == 4) cout << "thursday" << endl;
		else if (n == 5 && a == 5) cout << "friday" << endl;
		else  if (n == 6 && a == 6) cout << "saturday" << endl;

		else cout << "error" << endl;
	}if (k % 7 == 0) cout << "sunday";
	return 0;
}