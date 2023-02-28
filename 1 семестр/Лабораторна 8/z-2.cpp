#include <iostream>
#include<vector>
using namespace std;
int main()
{	
	cout << " please enter quantity of array: "<<endl;
	int n, numMin = 0, p = 0;
	cin >> n;

	cout << " please enter array: " << endl;
	vector <int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];

	cout << " numbers included in the array only once: "<<endl;
	for (int i = 0; i < n; i++) {
		int rav = 0;
		for (int i = 0; i < n; i++) {
			if (num[numMin] == num[i]) {
				rav++;
			}
		}
		if (rav == 1) {
			cout << num[numMin] << " ";
		}
		numMin++;
		p++;
	}
	system("pause");
	return 0;
}