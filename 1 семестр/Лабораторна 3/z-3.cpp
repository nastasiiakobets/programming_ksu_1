#include <iostream>
#include<cmath>
using namespace std;
float DegToRad(float D)
{
	double g;
	g = (D *3.14 ) /180 ;
	cout << "after D=" << g<<endl;
	return g;
}
int main()
{
	float D;
	for (int i = 1; i < 6; i++) 
	{
		cout << endl << "enter " << i << " D(0 <= D <360): ";
		cin >> D;
		if (0 <= D < 360) 
		{
			DegToRad(D);
			
		}
	}
	cout << endl;
	return 0;
}


