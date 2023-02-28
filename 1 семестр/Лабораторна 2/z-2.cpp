
#include<cmath>
#include <iostream>
using namespace std;
int main()
{
	int i;
	double r1, r2, d, s,a;
	cout << "enter number and meains";
	cin >> i >> d;
	if (i == 1)
	{
		r1 = d * sqrt(3) / 6;
		r2 = 2 * r1;
		s = pow(d, 2) * sqrt(3) / 4;
		cout << r1 << " " << r2 <<" " << s;
	}
	else if (i == 2) {
		a = 6*d/ sqrt(3);
		r2 = 2 * d;
		s = pow(a, 2) * sqrt(3) / 4;
		cout << a << " " << r2 << " " << s;

	}
	else if (i == 3) {
		r1 = d / 2;
		a = 6 * r1 / sqrt(3);
		s = pow(a, 2) * sqrt(3) / 4;
		cout << a << " " << r1 << " " << s;

	}
	else if (i == 4) {
		a = sqrt(4 * d / sqrt(3));
		r1 = a * sqrt(3) / 6;
		r2 = 2 * r1;
		cout << a << " " << r1 << " " << r2;

	}

	return 0;
}


