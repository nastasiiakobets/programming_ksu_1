#include <iostream>
#include <cmath>
using namespace std;
void AB(long double* P1, double* P2, long int* P3)
{
	*P1 = sin(pow(abs(*P3), *P2));
}
int main()
{
	long double* P1 = new long double;
	double* P2 = new double;
	long int* P3 = new long int;

	cout << "enter P3, P2" ;
	cin >> *P3 >> *P2;

	AB(P1, P2, P3);

	cout<< endl << "pointer value Р2=" << P2<<endl << "the value to which it refers = " << *P2;

	delete P1, P2, P3;
	return 0;
}
