#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	char t[100];
	cout << " enter string:" << endl;
	cin >> t;

		replace(begin(t), end(t), '.', '+');
		replace(begin(t), end(t), ',', '-');
		std::cout << " Replaced string: " <<endl<< t << "\n\n";

		int arr[2]{ 0 };
		for (auto sym : t)
		{
			switch (sym) {
			case '+': ++arr[0]; break;
			case '-': ++arr[1]; break;
			}
		}
		cout << " result"<<endl<<
			    " + " << arr[0] << endl;
		cout << " - " << arr[1] << endl;


	system("pause");
	return 0;
}