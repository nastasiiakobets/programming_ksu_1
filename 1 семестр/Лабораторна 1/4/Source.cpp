#include <iostream>
using namespace std;

int main() {
	int a;
	double  b, c, d;

	cout << "enter the number" << endl;
	cin >> a;

	if (a > 99 && a < 1000) {
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		
		if (b>c && c>d)
		{cout << "the digits of this number create a descending sequence";
		}
		else {
			if (d>c && c>b)
	cout << "the digits of this number form an ascending sequence" << endl;
			else {
			
				cout << "error";
			}
		}
	}
	else {
		cout << "error";
	}
	return 0;
}