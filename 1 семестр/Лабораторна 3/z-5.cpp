#include <iostream>
using namespace std;
bool IsPower5(int K) 
{
	if (K%5==0) 
	{
     return true; 
    }	
	else
	return false;
}
int main()
{
	int a;
	cout << "enter 10 positive number:";
	for (int i = 1; i < 11; i++) 
	{
		
		cin >> a;
		if (a > 0) 
		{
			IsPower5(a);
			if (IsPower5(a) == true)
			{
				cout << "number " << a << " is a power of 5"<<endl;
			}
			else
				cout << "number " << a << " is not a power of 5"<<endl;
		}
    }
	return 0;
}
