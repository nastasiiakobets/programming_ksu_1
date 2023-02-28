#include <iostream>
using namespace std;
int main()
{
	int *a=new int, *b=new int;
	int d, c;
	 
	cout << "enter a and b: ";
	cin >> d >> c;
	
	*a = d, *b= c;
	return 0;
}
