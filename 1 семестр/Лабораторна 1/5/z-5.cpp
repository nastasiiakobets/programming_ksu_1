#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "enter the numbers:" << endl << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	if (x == y || (x % 2 == 1 && y % 2 == 1)) {
		cout << "the fielt is black";

	}
	else {
		cout << "the fielt is white";
	}

	return 0;
}