#include <iostream>
#include <stdio.h>
using namespace std;

float Fact(int N)
{
        if (N == 1)
        {
            return 1;
        }
        else
        {
            if (N > 0)
                return N * Fact(N - 1);
            else cout << "error";
        }
}
int main()
{
        int a;
        cout << "enter 5 numbers: ";
        for (int i = 0; i < 5; i++) 
        {
            cin >> a;
            cout<<"factorial "<<a<< "=" << Fact(a) <<"\n";
        }


    system("pause");
    return 0;
}