#include <stdio.h>
#include<iostream>
using namespace std;
	int main()
	{
		int x;
		int max_m, max_s;
		max_m = 0;
		max_s = 0;
		
		if (scanf_s("%d", &x))
		{
			if (x > 0)
			{
				int sum = 0;
				int temp = x;
				while (temp)
				{
					int digit = temp % 10;
					temp /= 10;
					sum += digit;
				}
				if (sum > max_s)
				{
					max_s = sum;
					max_m = x;
				}
			}
			else cout << "error";
		}
		cout << max_s << " " << max_m;
		return 0;
	}
