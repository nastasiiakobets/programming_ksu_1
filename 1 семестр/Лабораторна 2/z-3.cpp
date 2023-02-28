
#include <iostream>
using namespace std;
int main()
{
	unsigned int i;
	int s=0;
	cout << "enter positive number";
	cin >> i; cout << endl;
	for (int n=1; n<= i; n++) {
		s = s+(2*n-1);
		cout << s<<" ";
	}
	return 0;
}

