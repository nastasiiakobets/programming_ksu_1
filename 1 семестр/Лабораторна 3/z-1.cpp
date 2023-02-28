#include <iostream>
using namespace std;
float RectPS(float x1, float y1, float x2, float y2)
	{
	double P, S;
	float a, b;

	a = abs(y2 - y1);
	b = abs(x2 - x1);

	P = 2 * (a + b);
	S = a * b;

    cout<<"P="<<P << " S=" << S;
	return P, S;
	}
int main() 
{

	float a, b, c, d;
	for (int i = 1; i < 4; i++) {
		cout << endl<<"enter x1, y1, x2, y2 (for "<<i<<" rectangle): ";
		cin>>a>>b>>c>>d;
		cout << endl;
		 RectPS (a, b, c, d);
			
	}
	return 0;
}

