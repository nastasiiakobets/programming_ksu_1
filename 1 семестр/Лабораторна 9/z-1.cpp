#include <iostream>
using namespace std;
int main()
{
	int a[10][10], S, i, j;

	cout << "enter array a[10][10] \n";

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			cin >> a[i][j];
	for (S = i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (j <= i&&a[i][j]>0) 
				S += a[i][j];

	cout << "S=" << S << endl;
	
	system("pause");
	return 0;
}

