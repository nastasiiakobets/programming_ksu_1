#include <iostream>
#include<cmath>
using namespace std;
double TriangleP(int a,int h) 
{
	double b, P;

	b = sqrt(pow((a/2), 2)+pow(h,2));
	P =  2 * b+a;

	cout << "P=" << P;
	return P;
}
int main()
{
	int a, b;
	for (int i = 1; i < 4; i++) {
		cout << endl << "enter a,h (for " << i << " triangle): ";
		cin >> a >> b;
		cout << endl;
		TriangleP(a, b);
	}
	return 0;
}

