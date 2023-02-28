#include <iostream>
#include <cmath>
using namespace std;
float factorial(float a)
{
    float f = 1;

    for (float i = 3; i <= a; ++i)
    {
        f = f * i;
    }
    return f;
}
float Sin1(float x, float e)
{
    float b = 1, c;

    for (int i = 1; ; ++i)
    {
        c = pow(x, float(2 * i+1));
        c /= factorial(2 * i+1);
        if (c < e)
            break;
        if (i % 2)
            b=b-c;
        else
            b=b+c;
    }

    return b;
}
int main()
{
    float x,e;

    cout << "enter x: ";
    cin >> x;
    cout << "enter six e: ";

    for (int i = 1; i < 7; ++i)
    {
        cin >> e;
        cout << " after = " << Sin1(x, e) << endl;
    }
    return 0;
}
