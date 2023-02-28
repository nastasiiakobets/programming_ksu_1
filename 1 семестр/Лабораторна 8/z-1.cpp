#include <iostream>
using namespace std;
int main()
{
	float a[15];
    int count = 0;

    cout << " please enter massiv A[15]: " << endl;
    
    for (int k = 0; k < 15; ++k)
    {cin >> a[k];
        if (a[k] < 0)
            ++count;
        if (a[k] == 0)
            cout << " position zero numbers: "<<k<<endl;
    }

    cout  << endl << " quantity of negative numbers: " << count << endl;

	
	system("pause");
    return 0;
}
