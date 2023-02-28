#include <iostream>
using namespace std;
int main()
{
	int d, c, b;
	cin >> d >> c >> b;
	if (b > c && c > d)
	{
		cout << "the digits of this number form an ascending sequence" << endl;
		b = b * 2;
		c = c * 2;
		d = d * 2;
		cout << "result=" << d << " " << c << " " << b;
	}
	else {
		if (d > c && c > b)
		{cout << "the digits of this number create a descending sequence"<<endl;
			
			b = b * (-1);
			c = c * (-1);
			d = d * (-1);
			cout << "result=" << d << " " << c << " " << b;
		}
		else {

			cout << "error";
		}
	}

	return 0;
}


