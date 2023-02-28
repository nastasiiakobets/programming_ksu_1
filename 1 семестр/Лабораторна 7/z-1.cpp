#include <iostream>
using namespace std;

class Point
{
private:

    float x, y;

public:
   
    Point()
    {
        x = y = 0;
    }

    Point(int nx, int ny)
    {
        x = nx;
        y = ny;
    }

    int GetX(void) { return x; }
    int GetY(void) { return y; }
    void SetX(int nx) { x = nx; }
    void SetY(int ny) { y = ny; }

    Point operator+(Point pt)
    {
        Point p;
        p.x = x + pt.x;
        p.y = y + pt.y;
        return p;
    }

    Point operator-(Point pt)
    {
        Point p;
        p.x = x - pt.x;
        p.y = y - pt.y;
        return p;
    }

    Point operator=(Point pt)
    {
        Point p;
        p.x = x = pt.x;
        p.y = y = pt.y;
        return p;
    }

    Point operator*(int n)
    {
        Point p;
        p.x = x * n;
        p.y = y * n;
        return p;
    }
};

int main()
{
    float a, b, d;
    int x, y; 

    cout << " enter x1 and y1 for point A(x1;y1)"<<endl;
    cin >> a >> b;
    Point P1(a, b);
    int a1, b1;

    cout << " enter x2 and y2 for point B(x2;y2)" << endl;
    cin >> a1 >> b1;
    Point P2(a1, b1);
    Point P3;
    

    cout << " enter number n=";
    cin >> d;

    P3 = P1 * d;
    x = P3.GetX();
    y = P3.GetY();

    cout << "A*n = (" << x << ";" << y << ")"<<endl;

    P3 = P2 * d;
    x = P3.GetX();
    y = P3.GetY();

    cout << "B*n = (" << x << ";" << y << ")" << endl;
   
    P3 = P1 + P2; 
    x = P3.GetX();
    y = P3.GetY();

    cout <<"A+B = ("<< x<<";"<< y<<")"<<endl;

   
    P3 = P1-P2;
    x = P3.GetX(); 
    y = P3.GetY();

    cout << "A-B = (" << x << ";" << y << ")" << endl;

    P3 = P2 - P1;
    x = P3.GetX();
    y = P3.GetY();

    cout << "B-A = (" << x << ";" << y << ")" << endl;

    P3 = P1 = P2;
    x = P3.GetX();
    y = P3.GetY();

    cout << "A=B = (" << x << ";" << y << ")\n";

    system("pause");
    return 0;
}